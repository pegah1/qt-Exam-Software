#include "result.h"
#include "ui_result.h"
#include <cstdlib>
#include <cstdio>

result::result(
    QString name,
    int total_time,
    int contest_time,
    int questions,
    int correct,
    int wrong,
    QWidget *parent
    ) :
    QDialog(parent),
    ui(new Ui::result)
{
    ui->setupUi(this);

    this->setFixedSize(this->width(),this->height());

    ui->lbName->setText(name);
    {
        char buff[1024];
        sprintf(buff, "%02d : %02d", total_time / 60, total_time % 60);
        ui->lbTotalTime->setText(buff);
    }
    {
        char buff[1024];
        sprintf(buff, "%02d : %02d", contest_time / 60, contest_time % 60);
        ui->lbTestTime->setText(buff);
    }
    ui->lbTotalQuestions->setText(toString(questions));
    ui->lbCorrectAnswers->setText(toString(correct));
    ui->lbWrongAnswers->setText(toString(wrong));
    ui->lbNoAnswers->setText(toString(questions - correct - wrong));
    {
        double score = ((double)(correct*3 - wrong)) / ((double)questions) / 3.0 * 100.0;
        char buff[1024];
        sprintf(buff, "%.2lf", score);
        ui->lbScore->setText(buff);
    }
}

QString result::toString(int i) {
    char buff[64];
    sprintf(buff, "%d", i);
    return buff;
}

result::~result()
{
    delete ui;
}

void result::on_btnClose_clicked()
{
    close();
}
