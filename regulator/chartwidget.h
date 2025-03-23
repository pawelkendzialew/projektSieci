#ifndef CHARTWIDGET_H
#define CHARTWIDGET_H

#include <QApplication>
#include <QVBoxLayout>
#include <QWidget>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QValueAxis>
#include "simulation.h"
#include <vector>

namespace Ui {
class ChartWidget;
}

struct Range
{
    float min;
    float max;
};

class ChartWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ChartWidget(QWidget *parent = nullptr);
    ~ChartWidget();

public slots:
    void add_series(QString series_name, float y, ChartPosition position);
    void reset();
    void update_chart();

    std::vector<QLineSeries *> get_series_list() const { return this->series_list; }
    ChartPosition get_position() const { return this->position; }

private:
    void append_to_series(float x, float y);

    Range get_x_range();
    Range get_y_range();

    void set_ranges();

    void scroll_chart();
    void init();

    size_t durationTimer{0};

    Simulation &simulation;

    QChart *chart;
    QChartView *chart_view;

    std::vector<QLineSeries *> series_list;

    QValueAxis *axis_x;
    QValueAxis *axis_y;

    ChartPosition position;

    Ui::ChartWidget *ui;
};

#endif // CHARTWIDGET_H
