#include "Vegetables.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Service s = Service("input.txt");
    Vegetables w{ s };
    w.show();
    return a.exec();
}
