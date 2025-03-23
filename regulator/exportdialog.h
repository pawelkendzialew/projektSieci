#ifndef EXPORTDIALOG_H
#define EXPORTDIALOG_H

#include <QDialog>

namespace Ui {
class ExportDialog;
}

struct ExportChecked
{
    bool pid_i;
    bool pid_p;
    bool pid_d;
    bool pid_output;

    bool generator_output;

    bool error;

    bool arx_output;
    bool arx_noise;
};

class ExportDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ExportDialog(QWidget *parent = nullptr);
    ~ExportDialog();

    ExportChecked get_checked();

private:
    Ui::ExportDialog *ui;
};

#endif // EXPORTDIALOG_H
