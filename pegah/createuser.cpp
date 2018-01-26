#include "createuser.h"
#include "ui_createuser.h"
#include <string>
#include <QMessageBox>
#include "userlist.h"
#include <stdexcept>
#include <cstddef>

using std::string;
using std::runtime_error;
using std::size_t;

createuser::createuser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::createuser)
{
    ui->setupUi(this);

    this->setFixedSize(this->width(),this->height());
    ui->txtPassword->setEchoMode(QLineEdit::Password);
    ui->txtRetypePassword->setEchoMode(QLineEdit::Password);
    ui->txtUserName->setFocus();
}

createuser::~createuser()
{
    delete ui;
}


void createuser::on_btnCancel_clicked()
{
    close();
}

void createuser::on_btnCreate_clicked()
{
    string username = ui->txtUserName->text().toLower().toAscii().constData();
    string password = ui->txtPassword->text().toLower().toAscii().constData();
    string retype = ui->txtRetypePassword->text().toAscii().constData();
    userlevel_t req;

    for(size_t i = 0, _i = username.size(); i != _i; ++i) {
        if(username[i] == ' ' || username[i] == '\t' || username[i] == 10) { //chera?????
            QMessageBox* msg = new QMessageBox(this);
            msg->setText("username can not have white spaces");
            msg->setWindowTitle("create user");
            msg->setIcon(QMessageBox::Critical);
            msg->exec();
            delete msg;
            ui->txtUserName->setFocus();
            ui->txtUserName->selectAll();
            return;
        }
    }

    switch(ui->cmbRole->currentIndex()) {
    case 0: req = USER_LEVEL_CONTESTANT; break;
    case 1: req = USER_LEVEL_DESIGNER; break;
    case 2: req = USER_LEVEL_ADMIN; break;
    default:
        throw runtime_error("invalid selection");
    }

    if(password != retype) {
        QMessageBox* msg = new QMessageBox(this);
        msg->setText("passwords do not match");
        msg->setWindowTitle("create user");
        msg->setIcon(QMessageBox::Critical);
        msg->exec();
        delete msg;
        ui->txtRetypePassword->setFocus();
        ui->txtRetypePassword->selectAll();
        return;
    }

    for(size_t i = 0, _i = password.size(); i != _i; ++i) {
        if(password[i] == ' ' || password[i] == '\t' || password[i] == 10) {
            QMessageBox* msg = new QMessageBox(this);
            msg->setText("password can not have white spaces");
            msg->setWindowTitle("create user");
            msg->setIcon(QMessageBox::Critical);
            msg->exec();
            ui->txtPassword->setFocus();
            ui->txtPassword->selectAll();
            delete msg;
            return;
        }
    }

    if(userlist::exists(username)) {
        QMessageBox* msg = new QMessageBox(this);
        msg->setText("user already exists");
        msg->setWindowTitle("create user");
        msg->setIcon(QMessageBox::Critical);
        msg->exec();
        ui->txtUserName->setFocus();
        ui->txtUserName->selectAll();
        delete msg;
        return;
    }

    userlist::add(user(username, password, req));

    close();
}
