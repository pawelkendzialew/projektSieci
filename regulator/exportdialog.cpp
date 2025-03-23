#include "exportdialog.h"
#include "ui_exportdialog.h"

ExportDialog::ExportDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ExportDialog)
{
    ui->setupUi(this);
}

ExportDialog::~ExportDialog()
{
    delete ui;
}

ExportChecked ExportDialog::get_checked()
{
    qDebug() << "get_checked";
    qDebug() << this->ui->pid_i_checkbox->isChecked();
    qDebug() << this->ui->pid_p_checkbox->isChecked();
    qDebug() << this->ui->pid_d_checkbox->isChecked();
    qDebug() << this->ui->pid_output->isChecked();
    qDebug() << this->ui->pid_error->isChecked();
    qDebug() << this->ui->generator_output->isChecked();
    qDebug() << this->ui->arx_output->isChecked();
    qDebug() << this->ui->arx_noise->isChecked();

    return {.pid_i = this->ui->pid_i_checkbox->isChecked(),
            .pid_p = this->ui->pid_p_checkbox->isChecked(),
            .pid_d = this->ui->pid_d_checkbox->isChecked(),
            .pid_output = this->ui->pid_output->isChecked(),
            .generator_output = this->ui->generator_output->isChecked(),
            .error = this->ui->pid_error->isChecked(),
            .arx_output = this->ui->arx_output->isChecked(),
            .arx_noise = this->ui->arx_noise->isChecked()

    };
}
