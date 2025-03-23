#include "chartwidget.h"
#include "ui_chartwidget.h"

static size_t chart_counter{0};

ChartWidget::ChartWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ChartWidget)
    , chart(new QChart())
    , axis_x(new QValueAxis())
    , axis_y(new QValueAxis())
    , chart_view(new QChartView(this))
    , simulation(Simulation::get_instance())
    , position(static_cast<ChartPosition>(chart_counter++))
{
    ui->setupUi(this);

    this->init();

    connect(&this->simulation, &Simulation::add_series, this, &ChartWidget::add_series);
    connect(&this->simulation, &Simulation::update_chart, this, &ChartWidget::update_chart);
    connect(&this->simulation, &Simulation::reset_chart, this, &ChartWidget::reset);
}

void ChartWidget::reset()
{
    for (auto series : this->series_list) {
        series->clear();
    }

    this->set_ranges();
    this->axis_y->setRange(-1, 1);
}

ChartWidget::~ChartWidget()
{
    delete ui;
    delete chart;

    for (auto series : this->series_list) {
        delete series;
    }

    delete axis_x;
    delete axis_y;
    delete chart_view;
}

void ChartWidget::init()
{
    this->chart->addAxis(this->axis_x, Qt::AlignBottom);
    this->chart->addAxis(this->axis_y, Qt::AlignLeft);

    // this->chart->legend()->hide();
    this->chart_view->setRenderHint(QPainter::Antialiasing);

    chart->setMargins(QMargins(0, 0, 0, 0));
    chart->setBackgroundRoundness(0);
    chart->setBackgroundBrush(QBrush(QColor(Qt::transparent)));

    this->chart_view->setChart(this->chart);

    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(this->chart_view);

    this->setLayout(layout);
}

void ChartWidget::append_to_series(float x, float y) {}

void ChartWidget::add_series(QString series_name, float y, ChartPosition position)
{
    if (position != this->position)
        return;

    auto result = std::find_if(this->series_list.begin(),
                               this->series_list.end(),
                               [series_name](QLineSeries *series) {
                                   return series->name() == series_name;
                               });

    const Point point{static_cast<float>(this->simulation.get_tick()), y};

    if (result == this->series_list.end()) {
        auto *new_series = new QLineSeries();
        new_series->setName(series_name);
        this->chart->addSeries(new_series);

        new_series->attachAxis(this->axis_x);
        new_series->attachAxis(this->axis_y);

        this->series_list.push_back(new_series);
    } else {
        // size_t max_points = simulation.get_ticks_per_second() * 5;
        const size_t max_points = simulation.get_ticks_per_second() * 4;

        QLineSeries *series = *result;

        if (series->count() > max_points)
            series->removePoints(0, 1);
        series->append(point.x, point.y);
    }
}

Range ChartWidget::get_x_range()
{
    const size_t max_points = simulation.get_ticks_per_second() * 4;
    size_t x_min_range{0};

    if (this->simulation.get_tick() > max_points) {
        x_min_range = this->simulation.get_tick() - max_points;
    }

    return {static_cast<float>(x_min_range), static_cast<float>(this->simulation.get_tick())};
}

Range ChartWidget::get_y_range()
{
    float min_y{0};
    float max_y{0};

    for (auto series : this->series_list) {
        for (auto point : series->points()) {
            min_y = qMin(min_y, point.y());
            max_y = qMax(max_y, point.y());
        }
    }

    return {min_y, max_y};
}

void ChartWidget::set_ranges()
{
    Range x_range = this->get_x_range();
    Range y_range = this->get_y_range();

    // set chart axis range to 1,2

    this->axis_x->setRange(x_range.min, x_range.max);
    this->axis_y->setRange(y_range.min - 1, y_range.max + 1);
}

void ChartWidget::update_chart()
{
    this->set_ranges();
}

void ChartWidget::scroll_chart()
{
    this->axis_x->setRange(0, this->simulation.get_tick());
}
