#include <QtGui/QApplication>
#include "kreezireiv.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    KreezireIV w;
    w.show();

    return a.exec();
}
