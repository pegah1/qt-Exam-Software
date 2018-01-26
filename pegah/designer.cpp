#include "designer.h"
#include "ui_designer.h"
#include "userlist.h"
#include "createuser.h"
#include "testlist.h"
#include "edit.h"

designer::designer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::designer)
{
    ui->setupUi(this);

    this->setFixedSize(this->width(),this->height());
    update_buttons();
}

designer::~designer()
{
    delete ui;
}

void designer::update_buttons() {
    ui->btnCreateUser->setDisabled(userlist::current_user().level() != USER_LEVEL_ADMIN);
    ui->btnEdit->setDisabled(testlist::empty());
    ui->btnDelete->setDisabled(testlist::empty());
    ui->cmbTest->clear();

    for(int i = 0, _i = testlist::size(); i != _i; ++i) {
        test& t = testlist::at(i);
        ui->cmbTest->addItem(t.name.c_str());
    }
}

void designer::on_btnExit_clicked()
{
    close();
}

void designer::on_btnCreateUser_clicked()
{
    createuser *w = new createuser(this);
    w->setModal(true);
    hide();
    w->exec();
    show();
}

void designer::on_btnNew_clicked()
{
    edit* w = new edit(testlist::add(), this);
    w->setModal(true);
    hide();
    w->exec();
    show();
    update_buttons();
}

void designer::on_btnDelete_clicked()
{
    testlist::remove(testlist::at(ui->cmbTest->currentIndex()));
    update_buttons();
}

void designer::on_btnEdit_clicked()
{
    edit* w = new edit(testlist::at(ui->cmbTest->currentIndex()), this);
    w->setModal(true);
    hide();
    w->exec();
    show();
    update_buttons();
}
