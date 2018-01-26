#include "edit.h"
#include "ui_edit.h"
#include "testlist.h"
#include <QFileDialog>
#include <QMessageBox>

edit::edit(test& item, QWidget *parent) :
    QDialog(parent),
    _item(item),
    ui(new Ui::edit)
{
    ui->setupUi(this);

    _cur = 0;
    setWindowFlags( windowFlags() | Qt::WindowMaximizeButtonHint);

    reload();
}

edit::~edit()
{
    delete ui;
}

QString edit::toString(int i) {
    char buff[64];
    sprintf(buff, "%d", i);
    return buff;
}

bool edit::validate() {
                           //fasele khali aval v enteha reshta ro pak mikone
    if(ui->txtName->text().trimmed().size() == 0) {
        error("name can not be empty");
        return false;
    }

    if(ui->txtQuestionPic->text().trimmed().size() == 0 &&
            ui->txtQuestionText->toPlainText().trimmed().size() == 0) {
        error("question description can not be empty");
        return false;
    }

    if(ui->txtChoicePic1->text().trimmed().size() == 0 &&
            ui->txtChoiceText1->toPlainText().trimmed().size() == 0) {
        error("question choice 1 can not be empty");
        return false;
    }

    if(ui->txtChoicePic2->text().trimmed().size() == 0 &&
            ui->txtChoiceText2->toPlainText().trimmed().size() == 0) {
        error("question choice 2 can not be empty");
        return false;
    }

    if(ui->txtChoicePic3->text().trimmed().size() == 0 &&
            ui->txtChoiceText3->toPlainText().trimmed().size() == 0) {
        error("question choice 3 can not be empty");
        return false;
    }

    if(ui->txtChoicePic4->text().trimmed().size() == 0 &&
            ui->txtChoiceText4->toPlainText().trimmed().size() == 0) {
        error("question choice 4 can not be empty");
        return false;
    }

    return true;
}

void edit::save() {
    question& q = _item.at(_cur);

    _item.name = ui->txtName->text().toAscii().constData();
    _item.duration = ui->spinDuration->value();
    q.text = ui->txtQuestionText->toPlainText().toAscii().constData();
    q.text_pic = ui->txtQuestionPic->text().toAscii().constData();
    q.choice[0] = ui->txtChoiceText1->toPlainText().toAscii().constData();
    q.choice[1] = ui->txtChoiceText2->toPlainText().toAscii().constData();
    q.choice[2] = ui->txtChoiceText3->toPlainText().toAscii().constData();
    q.choice[3] = ui->txtChoiceText4->toPlainText().toAscii().constData();
    q.choice_pic[0] = ui->txtChoicePic1->text().toAscii().constData();
    q.choice_pic[1] = ui->txtChoicePic2->text().toAscii().constData();
    q.choice_pic[2] = ui->txtChoicePic3->text().toAscii().constData();
    q.choice_pic[3] = ui->txtChoicePic4->text().toAscii().constData();
    if(ui->radChoice1->isChecked()) q.answer = 0;
    else if(ui->radChoice2->isChecked()) q.answer = 1;
    else if(ui->radChoice3->isChecked()) q.answer = 2;
    else q.answer = 3;
}

void edit::reload() {
    if(_item.empty()) {
        _item.add();
    }
    question& q = _item.at(_cur);

    ui->txtName->setText(_item.name.c_str());
    ui->spinDuration->setValue(_item.duration);
    ui->lbQuestion->setText(toString(_cur+1));
    ui->txtQuestionText->setPlainText(q.text.c_str());
    ui->txtQuestionPic->setText(q.text_pic.c_str());
    ui->txtChoiceText1->setPlainText(q.choice[0].c_str());
    ui->txtChoiceText2->setPlainText(q.choice[1].c_str());
    ui->txtChoiceText3->setPlainText(q.choice[2].c_str());
    ui->txtChoiceText4->setPlainText(q.choice[3].c_str());
    ui->txtChoicePic1->setText(q.choice_pic[0].c_str());
    ui->txtChoicePic2->setText(q.choice_pic[1].c_str());
    ui->txtChoicePic3->setText(q.choice_pic[2].c_str());
    ui->txtChoicePic4->setText(q.choice_pic[3].c_str());
    ui->radChoice1->setChecked(q.answer == 0);
    ui->radChoice2->setChecked(q.answer == 1);
    ui->radChoice3->setChecked(q.answer == 2);
    ui->radChoice4->setChecked(q.answer == 3);
    ui->lbQuestionFrom->setText(toString(_cur+1));
    ui->lbQuestionTo->setText(toString(_item.size()));
    ui->btnPrev->setEnabled(_cur > 0);
    ui->btnNext->setEnabled((_cur+1) < _item.size());

}


void edit::on_btnSave_clicked()
{
    if(!validate()) return;
    save();
    testlist::save();
}

void edit::on_btnNew_clicked()
{
    if(!validate()) return;
    save();
    _item.add();
    _cur = _item.size() - 1;
    reload();
}

void edit::on_btnNext_clicked()
{
    if(!validate()) return;
    save();
    ++_cur;
    reload();
}

void edit::on_btnPrev_clicked()
{
    if(!validate()) return;
    save();
    --_cur;
    reload();
}

void edit::on_btnDelete_clicked()
{
    _item.v.erase(_item.v.begin() + _cur);
    if(_item.empty()) {
        _cur = 0;
    } else if(_cur >= _item.size()) {
        _cur = _item.size() - 1;
    }
    reload();
}

QString edit::ask() {
    QFileDialog dlg(this);
    dlg.setFilter("Images (*.png *.xpm *.jpg *.jpeg *.bmp);;All files (*.*)");
    dlg.setViewMode(QFileDialog::Detail);
    if(dlg.exec()) {
        return dlg.selectedFiles().first();
    }
    return "";
}

void edit::on_btnQuestionPic_clicked()
{
    QString s = ask();
    if(s.size() > 0) {
        ui->txtQuestionPic->setText(s);
    }
}

void edit::on_btnChoicePic2_clicked()
{
    QString s = ask();
    if(s.size() > 0) {
        ui->txtChoicePic2->setText(s);
    }
}

void edit::on_btnChoicePic1_clicked()
{
    QString s = ask();
    if(s.size() > 0) {
        ui->txtChoicePic1->setText(s);
    }
}

void edit::on_btnChoicePic4_clicked()
{
    QString s = ask();
    if(s.size() > 0) {
        ui->txtChoicePic4->setText(s);
    }
}

void edit::on_btnChoicePic3_clicked()
{
    QString s = ask();
    if(s.size() > 0) {
        ui->txtChoicePic3->setText(s);
    }
}

void edit::error(char const* reason) {
    QMessageBox* msg = new QMessageBox(this);
    msg->setModal(true);
    msg->setText(reason);
    msg->setWindowTitle("Edit");
    msg->setIcon(QMessageBox::Critical);
    msg->exec();
    delete msg;
}



