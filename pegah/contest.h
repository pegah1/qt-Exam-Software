#ifndef CONTEST_H
#define CONTEST_H

#include <QWidget>
#include <QDialog>
#include <QString>
#include <QTimer>
#include "test.h"
#include <vector>

namespace Ui {
    class contest;
}

class contest : public QDialog
{
    Q_OBJECT

    QString toString(int i);
    void load(test& t, int i);
    void update_time();

    void finish();

    QString title;
    bool time_reverse_mode;
    test* current_test;
    int current_test_index;
    int time;
    bool started;
    QTimer* timer;
    std::vector<int> answers;

protected:

    virtual void closeEvent(QCloseEvent *e);

public slots:
    virtual void reject();

public:
    explicit contest(QWidget *parent = 0);
    ~contest();

private slots:

    void on_timer_timeout();

    void on_cmbContest_currentIndexChanged(int index);

    void on_lbTime_clicked();

    void on_btnStart_clicked();

    void on_radChoice1_toggled(bool checked);

    void on_radChoice2_toggled(bool checked);

    void on_radChoice3_toggled(bool checked);

    void on_radChoice4_toggled(bool checked);

    void on_btnNext_clicked();

    void on_btnView_clicked();

    void on_btnExit_clicked();

private:
    Ui::contest *ui;
};

#endif // CONTEST_H
