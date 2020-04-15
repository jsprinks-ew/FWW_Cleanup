#include "fwwdata_cleanup.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FWWData_Cleanup w;
    w.show();
    return a.exec();
}
