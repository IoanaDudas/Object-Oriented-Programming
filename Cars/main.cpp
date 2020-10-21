#include "gui.h"

#include "test.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    testAll();

    QApplication a(argc, argv);
    Service service = Service();
    service.setFilename("file.txt");
    gui w{service};

    w.show();
    return a.exec();
}
