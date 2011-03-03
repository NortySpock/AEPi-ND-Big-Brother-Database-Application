#include <QtGui/QApplication>
#include "bb_db_frontend.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    bb_db_frontend w;
    w.show();
    return a.exec();
}
