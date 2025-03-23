/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "chartwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionOpen_2;
    QAction *action_save_as;
    QAction *action_open;
    QAction *action_export;
    QAction *action_simulation_open;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_5;
    QPushButton *simulation_start_button;
    QPushButton *simulation_stop_button;
    QPushButton *simulation_reset_button;
    QLabel *label_10;
    QDoubleSpinBox *simulation_duration_input;
    QLabel *label_14;
    QSpinBox *simulation_interval_input;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *arx_a_input;
    QLabel *label_7;
    QLineEdit *arx_b_input;
    QLabel *label_4;
    QSpinBox *arx_delay_input;
    QLabel *label_5;
    QComboBox *arx_noisetype_input;
    QLabel *label_6;
    QDoubleSpinBox *arx_noise_input;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_3;
    QLabel *label_2;
    QDoubleSpinBox *pid_ti_input;
    QLabel *label_8;
    QDoubleSpinBox *pid_td_input;
    QLabel *label_9;
    QDoubleSpinBox *pid_kp_input;
    QSpacerItem *verticalSpacer_2;
    QRadioButton *radioButton;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_4;
    QLabel *label_3;
    QDoubleSpinBox *generator_amplitude_input;
    QLabel *label_11;
    QDoubleSpinBox *generator_frequency_input;
    QLabel *label_12;
    QComboBox *generator_generatortype_input;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_13;
    QDoubleSpinBox *generator_infill_input;
    QVBoxLayout *verticalLayout_2;
    ChartWidget *widget_2;
    QFrame *line;
    ChartWidget *widget;
    QFrame *line_3;
    ChartWidget *widget_3;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuSimulation;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(922, 859);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionSave->setCheckable(false);
        actionOpen_2 = new QAction(MainWindow);
        actionOpen_2->setObjectName("actionOpen_2");
        action_save_as = new QAction(MainWindow);
        action_save_as->setObjectName("action_save_as");
        action_open = new QAction(MainWindow);
        action_open->setObjectName("action_open");
        action_export = new QAction(MainWindow);
        action_export->setObjectName("action_export");
        action_simulation_open = new QAction(MainWindow);
        action_simulation_open->setObjectName("action_simulation_open");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName("groupBox_4");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy);
        groupBox_4->setMaximumSize(QSize(200, 16777215));
        formLayout_5 = new QFormLayout(groupBox_4);
        formLayout_5->setObjectName("formLayout_5");
        formLayout_5->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        simulation_start_button = new QPushButton(groupBox_4);
        simulation_start_button->setObjectName("simulation_start_button");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::MediaPlaybackStart));
        simulation_start_button->setIcon(icon);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, simulation_start_button);

        simulation_stop_button = new QPushButton(groupBox_4);
        simulation_stop_button->setObjectName("simulation_stop_button");
        simulation_stop_button->setEnabled(false);
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::MediaPlaybackPause));
        simulation_stop_button->setIcon(icon1);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, simulation_stop_button);

        simulation_reset_button = new QPushButton(groupBox_4);
        simulation_reset_button->setObjectName("simulation_reset_button");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::SystemReboot));
        simulation_reset_button->setIcon(icon2);

        formLayout_5->setWidget(1, QFormLayout::SpanningRole, simulation_reset_button);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName("label_10");

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_10);

        simulation_duration_input = new QDoubleSpinBox(groupBox_4);
        simulation_duration_input->setObjectName("simulation_duration_input");

        formLayout_5->setWidget(2, QFormLayout::FieldRole, simulation_duration_input);

        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName("label_14");

        formLayout_5->setWidget(3, QFormLayout::LabelRole, label_14);

        simulation_interval_input = new QSpinBox(groupBox_4);
        simulation_interval_input->setObjectName("simulation_interval_input");
        simulation_interval_input->setMinimum(1);
        simulation_interval_input->setMaximum(99999999);
        simulation_interval_input->setSingleStep(10);

        formLayout_5->setWidget(3, QFormLayout::FieldRole, simulation_interval_input);


        verticalLayout->addWidget(groupBox_4);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMaximumSize(QSize(200, 16777215));
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setObjectName("formLayout_2");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        arx_a_input = new QLineEdit(groupBox);
        arx_a_input->setObjectName("arx_a_input");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, arx_a_input);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_7);

        arx_b_input = new QLineEdit(groupBox);
        arx_b_input->setObjectName("arx_b_input");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, arx_b_input);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_4);

        arx_delay_input = new QSpinBox(groupBox);
        arx_delay_input->setObjectName("arx_delay_input");
        arx_delay_input->setMinimum(1);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, arx_delay_input);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_5);

        arx_noisetype_input = new QComboBox(groupBox);
        arx_noisetype_input->addItem(QString());
        arx_noisetype_input->addItem(QString());
        arx_noisetype_input->addItem(QString());
        arx_noisetype_input->addItem(QString());
        arx_noisetype_input->addItem(QString());
        arx_noisetype_input->addItem(QString());
        arx_noisetype_input->addItem(QString());
        arx_noisetype_input->addItem(QString());
        arx_noisetype_input->setObjectName("arx_noisetype_input");

        formLayout_2->setWidget(3, QFormLayout::FieldRole, arx_noisetype_input);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_6);

        arx_noise_input = new QDoubleSpinBox(groupBox);
        arx_noise_input->setObjectName("arx_noise_input");
        arx_noise_input->setSingleStep(0.050000000000000);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, arx_noise_input);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout_2->setItem(5, QFormLayout::FieldRole, verticalSpacer);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setMaximumSize(QSize(200, 16777215));
        formLayout_3 = new QFormLayout(groupBox_2);
        formLayout_3->setObjectName("formLayout_3");
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_2);

        pid_ti_input = new QDoubleSpinBox(groupBox_2);
        pid_ti_input->setObjectName("pid_ti_input");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, pid_ti_input);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName("label_8");

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_8);

        pid_td_input = new QDoubleSpinBox(groupBox_2);
        pid_td_input->setObjectName("pid_td_input");

        formLayout_3->setWidget(2, QFormLayout::FieldRole, pid_td_input);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName("label_9");

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_9);

        pid_kp_input = new QDoubleSpinBox(groupBox_2);
        pid_kp_input->setObjectName("pid_kp_input");

        formLayout_3->setWidget(4, QFormLayout::FieldRole, pid_kp_input);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout_3->setItem(6, QFormLayout::LabelRole, verticalSpacer_2);

        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName("radioButton");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, radioButton);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy1);
        groupBox_3->setMaximumSize(QSize(200, 16777215));
        formLayout_4 = new QFormLayout(groupBox_3);
        formLayout_4->setObjectName("formLayout_4");
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName("label_3");

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_3);

        generator_amplitude_input = new QDoubleSpinBox(groupBox_3);
        generator_amplitude_input->setObjectName("generator_amplitude_input");
        generator_amplitude_input->setMinimum(0.000000000000000);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, generator_amplitude_input);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName("label_11");

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_11);

        generator_frequency_input = new QDoubleSpinBox(groupBox_3);
        generator_frequency_input->setObjectName("generator_frequency_input");
        generator_frequency_input->setMinimum(0.010000000000000);
        generator_frequency_input->setMaximum(9999.000000000000000);
        generator_frequency_input->setValue(100.000000000000000);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, generator_frequency_input);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName("label_12");

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_12);

        generator_generatortype_input = new QComboBox(groupBox_3);
        generator_generatortype_input->addItem(QString());
        generator_generatortype_input->addItem(QString());
        generator_generatortype_input->addItem(QString());
        generator_generatortype_input->addItem(QString());
        generator_generatortype_input->addItem(QString());
        generator_generatortype_input->setObjectName("generator_generatortype_input");

        formLayout_4->setWidget(3, QFormLayout::FieldRole, generator_generatortype_input);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout_4->setItem(5, QFormLayout::LabelRole, verticalSpacer_3);

        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName("label_13");

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_13);

        generator_infill_input = new QDoubleSpinBox(groupBox_3);
        generator_infill_input->setObjectName("generator_infill_input");
        generator_infill_input->setMaximum(100.000000000000000);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, generator_infill_input);

        generator_infill_input->raise();
        label_3->raise();
        generator_amplitude_input->raise();
        label_11->raise();
        generator_frequency_input->raise();
        label_12->raise();
        generator_generatortype_input->raise();
        label_13->raise();

        verticalLayout->addWidget(groupBox_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget_2 = new ChartWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(3);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(widget_2);

        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_2->addWidget(line);

        widget = new ChartWidget(centralwidget);
        widget->setObjectName("widget");
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(widget);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_2->addWidget(line_3);

        widget_3 = new ChartWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        sizePolicy2.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(widget_3);


        horizontalLayout->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 922, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        menuSimulation = new QMenu(menuBar);
        menuSimulation->setObjectName("menuSimulation");
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuSimulation->menuAction());
        menuFile->addAction(action_save_as);
        menuFile->addAction(action_open);
        menuSimulation->addAction(action_export);
        menuSimulation->addAction(action_simulation_open);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionOpen_2->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        action_save_as->setText(QCoreApplication::translate("MainWindow", "Save As...", nullptr));
        action_open->setText(QCoreApplication::translate("MainWindow", "Open...", nullptr));
        action_export->setText(QCoreApplication::translate("MainWindow", "Export...", nullptr));
        action_simulation_open->setText(QCoreApplication::translate("MainWindow", "Open...", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Simulation", nullptr));
        simulation_start_button->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        simulation_stop_button->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        simulation_reset_button->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Durration", nullptr));
        simulation_duration_input->setSuffix(QCoreApplication::translate("MainWindow", "s", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Interval", nullptr));
        simulation_interval_input->setSuffix(QCoreApplication::translate("MainWindow", "ms", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "ARX", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Delay", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Noise type", nullptr));
        arx_noisetype_input->setItemText(0, QCoreApplication::translate("MainWindow", "normal", nullptr));
        arx_noisetype_input->setItemText(1, QCoreApplication::translate("MainWindow", "uniform", nullptr));
        arx_noisetype_input->setItemText(2, QCoreApplication::translate("MainWindow", "triangular", nullptr));
        arx_noisetype_input->setItemText(3, QCoreApplication::translate("MainWindow", "exponential", nullptr));
        arx_noisetype_input->setItemText(4, QCoreApplication::translate("MainWindow", "laplace", nullptr));
        arx_noisetype_input->setItemText(5, QCoreApplication::translate("MainWindow", "poisson", nullptr));
        arx_noisetype_input->setItemText(6, QCoreApplication::translate("MainWindow", "gamma", nullptr));
        arx_noisetype_input->setItemText(7, QCoreApplication::translate("MainWindow", "beta", nullptr));

        label_6->setText(QCoreApplication::translate("MainWindow", "Noise", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "PID", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Ti", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Td", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Kp", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "      Ti wyci\304\205gni\304\231te", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Generator", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Amplitude", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Period", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Generator tpye", nullptr));
        generator_generatortype_input->setItemText(0, QCoreApplication::translate("MainWindow", "Sine", nullptr));
        generator_generatortype_input->setItemText(1, QCoreApplication::translate("MainWindow", "Square", nullptr));
        generator_generatortype_input->setItemText(2, QCoreApplication::translate("MainWindow", "Triangle", nullptr));
        generator_generatortype_input->setItemText(3, QCoreApplication::translate("MainWindow", "Sawtooth", nullptr));
        generator_generatortype_input->setItemText(4, QCoreApplication::translate("MainWindow", "Single Jump", nullptr));

        label_13->setText(QCoreApplication::translate("MainWindow", "Infill", nullptr));
        generator_infill_input->setPrefix(QString());
        generator_infill_input->setSuffix(QCoreApplication::translate("MainWindow", "%", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuSimulation->setTitle(QCoreApplication::translate("MainWindow", "Simulation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
