#include "login.h"
#include "ui_login.h"
#include "userlist.h"
#include <string>
#include <QMessageBox>
#include <cstddef>
#include <cctype>
#include "designer.h"
#include "contest.h"

using std::string;
using std::size_t;
using std::tolower;

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);

    this->setFixedSize(this->width(),this->height());

    ui->txtPassword->setEchoMode(QLineEdit::Password);

    ui->txtUserName->setFocus();
}

login::~login()
{
    delete ui;
}

void login::on_btnLogin_clicked()
{
    userlevel_t req = USER_LEVEL_DESIGNER;
    if(ui->cmbRole->currentIndex() != 0) {
        req = USER_LEVEL_CONTESTANT;
    }

    string username = ui->txtUserName->text().toAscii().constData();
    string password = ui->txtPassword->text().toAscii().constData();

    if(!userlist::exists(username)) {
        QMessageBox msg(this);
        msg.setText("Invalid username or password");
        msg.setWindowTitle("Login");
        msg.setIcon(QMessageBox::Critical);
        msg.exec();
        ui->txtUserName->setFocus();
        ui->txtUserName->selectAll();
        ui->txtPassword->clear();
        return;
    }

    user const& x = userlist::at(username);

    if(x.password() != password) {
        QMessageBox msg(this);
        msg.setText("Invalid username or password");
        msg.setWindowTitle("Login");
        msg.setIcon(QMessageBox::Critical);
        msg.exec();
        ui->txtUserName->setFocus();
        ui->txtUserName->selectAll();
        ui->txtPassword->clear();
        return;
    }

    if(req == USER_LEVEL_DESIGNER && x.level() == USER_LEVEL_CONTESTANT) {
        QMessageBox msg(this);
        msg.setText("you don't have the privillege to enter as designer");
        msg.setWindowTitle("Login");
        msg.setIcon(QMessageBox::Critical);
        msg.exec();
        ui->txtUserName->setFocus();
        ui->txtUserName->selectAll();
        ui->txtPassword->clear();
        return;
    }

    userlist::logon(x);

    if(req == USER_LEVEL_DESIGNER) {
        designer* d = new designer(this);
        hide();
        d->exec();
    } else {
        contest* d = new contest(this);
        hide();
        d->exec();
    }
}

void login::on_btnExit_clicked()
{
    this->close();
}
