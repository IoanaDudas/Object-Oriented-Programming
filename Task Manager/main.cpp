#include "Task_manager.h"
#include <QtWidgets/QApplication>
#include "Test.h"

int main(int argc, char *argv[])
{
    testAll();

    QApplication a(argc, argv);
    Service s = Service("input.txt");
    Task_manager w{s};
    w.show();
    return a.exec();
}
