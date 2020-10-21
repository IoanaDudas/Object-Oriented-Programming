
#include "test.h"
#include "UI.h"
#include "GUI.h"
#include <iostream>
#include <QtWidgets/QApplication>
using namespace std;

int main(int argc, char *argv[])
{
//    testDate();
//    testTape();
//    testInMemoryRepository();
//    testRepositoryHelper();
//    testService();
//    testDynamicVector();
//    testFileRepository();

//    FileRepository repository = FileRepository();
//    Service service = Service(repository);
//    UI ui = UI(service);
//
//    ui.run();


    QApplication a(argc, argv);

    FileRepository repository = FileRepository();
    Service service = Service(repository);
    service.setRepositoryFilenameService("read.txt");


    GUI gui{service};
    gui.show();

    return a.exec();
}