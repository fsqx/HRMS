#include "hrmsmainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HRMSMainWindow w;
    w.show();
    return a.exec();
}
