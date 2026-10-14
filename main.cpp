#include "numtrans.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NumTrans w;
    w.setWindowTitle("數字轉換器");
    w.show();
    return QApplication::exec();
}
