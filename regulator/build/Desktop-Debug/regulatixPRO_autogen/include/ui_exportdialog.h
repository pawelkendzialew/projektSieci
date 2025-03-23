/********************************************************************************
** Form generated from reading UI file 'exportdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTDIALOG_H
#define UI_EXPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *sex;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *pid_error;
    QCheckBox *pid_p_checkbox;
    QCheckBox *pid_i_checkbox;
    QCheckBox *pid_d_checkbox;
    QCheckBox *pid_output;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *generator_output;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *arx_noise;
    QCheckBox *arx_output;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExportDialog)
    {
        if (ExportDialog->objectName().isEmpty())
            ExportDialog->setObjectName("ExportDialog");
        ExportDialog->resize(267, 395);
        verticalLayout = new QVBoxLayout(ExportDialog);
        verticalLayout->setObjectName("verticalLayout");
        sex = new QGroupBox(ExportDialog);
        sex->setObjectName("sex");
        verticalLayout_2 = new QVBoxLayout(sex);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pid_error = new QCheckBox(sex);
        pid_error->setObjectName("pid_error");

        verticalLayout_2->addWidget(pid_error);

        pid_p_checkbox = new QCheckBox(sex);
        pid_p_checkbox->setObjectName("pid_p_checkbox");

        verticalLayout_2->addWidget(pid_p_checkbox);

        pid_i_checkbox = new QCheckBox(sex);
        pid_i_checkbox->setObjectName("pid_i_checkbox");

        verticalLayout_2->addWidget(pid_i_checkbox);

        pid_d_checkbox = new QCheckBox(sex);
        pid_d_checkbox->setObjectName("pid_d_checkbox");

        verticalLayout_2->addWidget(pid_d_checkbox);

        pid_output = new QCheckBox(sex);
        pid_output->setObjectName("pid_output");

        verticalLayout_2->addWidget(pid_output);


        verticalLayout->addWidget(sex);

        groupBox_4 = new QGroupBox(ExportDialog);
        groupBox_4->setObjectName("groupBox_4");
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setObjectName("verticalLayout_3");
        generator_output = new QCheckBox(groupBox_4);
        generator_output->setObjectName("generator_output");

        verticalLayout_3->addWidget(generator_output);


        verticalLayout->addWidget(groupBox_4);

        groupBox_3 = new QGroupBox(ExportDialog);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        arx_noise = new QCheckBox(groupBox_3);
        arx_noise->setObjectName("arx_noise");

        verticalLayout_4->addWidget(arx_noise);

        arx_output = new QCheckBox(groupBox_3);
        arx_output->setObjectName("arx_output");

        verticalLayout_4->addWidget(arx_output);


        verticalLayout->addWidget(groupBox_3);

        buttonBox = new QDialogButtonBox(ExportDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ExportDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ExportDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ExportDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ExportDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportDialog)
    {
        ExportDialog->setWindowTitle(QCoreApplication::translate("ExportDialog", "Dialog", nullptr));
        sex->setTitle(QCoreApplication::translate("ExportDialog", "PID", nullptr));
        pid_error->setText(QCoreApplication::translate("ExportDialog", "Error", nullptr));
        pid_p_checkbox->setText(QCoreApplication::translate("ExportDialog", "P", nullptr));
        pid_i_checkbox->setText(QCoreApplication::translate("ExportDialog", "I", nullptr));
        pid_d_checkbox->setText(QCoreApplication::translate("ExportDialog", "D", nullptr));
        pid_output->setText(QCoreApplication::translate("ExportDialog", "Output", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("ExportDialog", "Generator", nullptr));
        generator_output->setText(QCoreApplication::translate("ExportDialog", "Output", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ExportDialog", "ARX", nullptr));
        arx_noise->setText(QCoreApplication::translate("ExportDialog", "Noise", nullptr));
        arx_output->setText(QCoreApplication::translate("ExportDialog", "Output", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExportDialog: public Ui_ExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTDIALOG_H
