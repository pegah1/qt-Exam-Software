#ifndef RESULT_H
#define RESULT_H

#include <QWidget>
#include <QDialog>
#include <QString>

namespace Ui {
    class result;
}

class result : public QDialog
{
    Q_OBJECT

    QString toString(int i);

public:
    result(
        QString name,
        int total_time,
        int contest_time,
        int questions,
        int correct,
        int wrong,
        QWidget *parent = 0
        );
    ~result();

private slots:
    void on_btnClose_clicked();

    void on_lbTestTime_linkActivated(const QString &link);

private:
    Ui::result *ui;
};

#endif // RESULT_H
