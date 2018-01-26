#include <QtGui/QApplication>
#include "login.h"
#include "designer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login w;
    w.show();

    return a.exec();
}
