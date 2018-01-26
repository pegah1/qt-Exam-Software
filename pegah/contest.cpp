#include "contest.h"
#include "ui_contest.h"
#include "userlist.h"
#include "testlist.h"
#include <QGraphicsPixmapItem>
#include "result.h"
#include <QMessageBox>
#include <QCloseEvent>

contest::contest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::contest)
{
    ui->setupUi(this);

    ui->gQuestion->setScene(new QGraphicsScene);
    ui->gChoice1->setScene(new QGraphicsScene);
    ui->gChoice2->setScene(new QGraphicsScene);
    ui->gChoice3->setScene(new QGraphicsScene);
    ui->gChoice4->setScene(new QGraphicsScene);

    setWindowFlags( windowFlags() | Qt::WindowMaximizeButtonHint);

    ui->txtName->setText(userlist::current_user().username().c_str());

    for(int i = 0, _i = testlist::size(); i != _i; ++i) {
        ui->cmbContest->addItem(testlist::at(i).name.c_str());
    }

    title = ui->groupQuestion->title();

    time_reverse_mode = false;
    current_test = NULL;
    current_test_index = -1;
    started = false;
    time = 0;

    if(testlist::empty()) {
        ui->txtName->setEnabled(false);
        ui->cmbContest->setEnabled(false);
        ui->btnStart->setEnabled(false);
    } else {
        current_test = &testlist::at(0);
        current_test_index = 0;
        load(*current_test, 0);
    }
}

contest::~contest()
{
    delete ui;
}

QString contest::toString(int i) {
    char buff[64];
    sprintf(buff, "%d", i);
    return buff;
}

void contest::update_time() {

    int cur = time;
    int max = current_test->duration;

    char buff[1024];
    if(time_reverse_mode) {
        cur = max*60 - cur;
    }
    sprintf(buff, "%02d:%02d / %02d:00", (cur/60), (cur%60), (max));
    ui->lbTime->setText(buff);
}

void contest::load(test& t, int i) {
    question& q = t.at(i);

    ui->lbQuestion->setText(q.text.c_str());
    ui->radChoice1->setText(q.choice[0].c_str());
    ui->radChoice2->setText(q.choice[1].c_str());
    ui->radChoice3->setText(q.choice[2].c_str());
    ui->radChoice4->setText(q.choice[3].c_str());
    ui->gChoice1->scene()->clear();
    ui->gChoice2->scene()->clear();
    ui->gChoice3->scene()->clear();
    ui->gChoice4->scene()->clear();
    ui->gQuestion->scene()->clear();
    if(!q.text_pic.empty()) ui->gQuestion->scene()->addItem(new QGraphicsPixmapItem(QPixmap(q.text_pic.c_str()).scaled(ui->gQuestion->size(), Qt::KeepAspectRatio)));
    if(!q.choice_pic[0].empty()) ui->gChoice1->scene()->addItem(new QGraphicsPixmapItem(QPixmap(q.choice_pic[0].c_str()).scaled(ui->gChoice1->size(), Qt::KeepAspectRatio)));
    if(!q.choice_pic[1].empty()) ui->gChoice2->scene()->addItem(new QGraphicsPixmapItem(QPixmap(q.choice_pic[1].c_str()).scaled(ui->gChoice2->size(), Qt::KeepAspectRatio)));
    if(!q.choice_pic[2].empty()) ui->gChoice3->scene()->addItem(new QGraphicsPixmapItem(QPixmap(q.choice_pic[2].c_str()).scaled(ui->gChoice3->size(), Qt::KeepAspectRatio)));
    if(!q.choice_pic[3].empty()) ui->gChoice4->scene()->addItem(new QGraphicsPixmapItem(QPixmap(q.choice_pic[3].c_str()).scaled(ui->gChoice4->size(), Qt::KeepAspectRatio)));
    ui->lbCurrent->setText(toString(i+1));
    ui->lbTotal->setText(toString(t.size()));
    ui->btnNext->setEnabled(started && (i+1) < t.size());
    if(title.size() > 0) ui->groupQuestion->setTitle(QString(":") + title + " " + toString(i+1));

    update_time();
}

void contest::on_cmbContest_currentIndexChanged(int index)
{
    current_test = &testlist::at(index);
    current_test_index = 0;
    load(testlist::at(index), 0);
}

void contest::on_lbTime_clicked()
{
    time_reverse_mode = !time_reverse_mode;

    if(current_test) {
        update_time();
    }
}

void contest::on_btnStart_clicked()
{
    started = true;
    ui->txtName->setEnabled(false);
    ui->cmbContest->setEnabled(false);
    ui->btnStart->setEnabled(false);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(on_timer_timeout()));
    load(*current_test, 0);
    answers.push_back(-1);
    ui->radChoice1->setEnabled(true);
    ui->radChoice2->setEnabled(true);
    ui->radChoice3->setEnabled(true);
    ui->radChoice4->setEnabled(true);

    timer->start(1000);
}

void contest::finish() {
    ui->btnNext->setEnabled(false);
    ui->radChoice1->setEnabled(false);
    ui->radChoice2->setEnabled(false);
    ui->radChoice3->setEnabled(false);
    ui->radChoice4->setEnabled(false);
    ui->btnView->setEnabled(true);
    timer->stop();
}

void contest::on_timer_timeout() {
    ++time;

    if(time >= current_test->duration*60) {
        finish();
    } else {
        load(*current_test, current_test_index);
    }
}

void contest::on_radChoice1_toggled(bool checked)
{
    if(checked) {
        answers.back() = 0;
        if(current_test_index+1 == current_test->size()) {
            finish();
        }
    }
}

void contest::on_radChoice2_toggled(bool checked)
{
    if(checked) {
        answers.back() = 1;
        if(current_test_index+1 == current_test->size()) {
            finish();
        }
    }
}

void contest::on_radChoice3_toggled(bool checked)
{
    if(checked) {
        answers.back() = 2;
        if(current_test_index+1 == current_test->size()) {
            finish();
        }
    }
}

void contest::on_radChoice4_toggled(bool checked)
{
    if(checked) {
        answers.back() = 3;
        if(current_test_index+1 == current_test->size()) {
            finish();
        }
    }
}

void contest::on_btnNext_clicked()
{
    ++current_test_index;
    answers.push_back(-1);
    load(*current_test, current_test_index);

    ui->radChoice1->setAutoExclusive(false);
    ui->radChoice2->setAutoExclusive(false);
    ui->radChoice3->setAutoExclusive(false);
    ui->radChoice4->setAutoExclusive(false);

    ui->radChoice1->setChecked(false);
    ui->radChoice2->setChecked(false);
    ui->radChoice3->setChecked(false);
    ui->radChoice4->setChecked(false);

    ui->radChoice1->setAutoExclusive(true);
    ui->radChoice2->setAutoExclusive(true);
    ui->radChoice3->setAutoExclusive(true);
    ui->radChoice4->setAutoExclusive(true);
}

void contest::on_btnView_clicked()
{
    int correct = 0;
    int wrong = 0;
    int na = 0;

    for(int i = 0, _i = current_test->size(); i != _i; ++i) {
        if(answers[i] == -1) {
            ++na;
        } else {
            if(answers[i] == current_test->at(i).answer) {
                ++correct;
            } else {
                ++wrong;
            }
        }
    }
    ::result* d = new ::result(
                ui->txtName->text(),
                current_test->duration*60,
                time,
                current_test->size(),
                correct,
                wrong,
                this
                );
    hide();
    d->exec();
}

void contest::reject() {
    QMessageBox* msg = new QMessageBox(this);
    msg->setWindowTitle("Test");
    msg->setText("Are you sure you want to quit?");
    msg->addButton(QMessageBox::Yes);
    msg->addButton(QMessageBox::No);
    msg->setIcon(QMessageBox::Warning);
    msg->exec();
    if(msg->result() == QMessageBox::Yes) {
        exit(0);
    }
    delete msg;
}

void contest::closeEvent(QCloseEvent *e) {
    QMessageBox* msg = new QMessageBox(this);
    msg->setWindowTitle("Test");
    msg->setText("Are you sure you want to quit?");
    msg->addButton(QMessageBox::Yes);
    msg->addButton(QMessageBox::No);
    msg->setIcon(QMessageBox::Warning);
    msg->exec();
    if(msg->result() == QMessageBox::Yes) {
        e->accept();
    } else {
        e->ignore();
    }
    delete msg;
}

void contest::on_btnExit_clicked()
{
    QMessageBox* msg = new QMessageBox(this);
    msg->setWindowTitle("Test");
    msg->setText("Are you sure you want to quit?");
    msg->addButton(QMessageBox::Yes);
    msg->addButton(QMessageBox::No);
    msg->setIcon(QMessageBox::Warning);
    msg->exec();
    if(msg->result() == QMessageBox::Yes) {
        close();
    }
    delete msg;
}
