#include "gui.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Service service = Service();
    service.setFilename("test.txt");
    gui w{service};

    w.show();
    return a.exec();
}
