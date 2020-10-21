#include "gui.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    service serv = service();
    serv.setFilename("test.txt");
    gui w{serv};

    w.show();
    return a.exec();
}
