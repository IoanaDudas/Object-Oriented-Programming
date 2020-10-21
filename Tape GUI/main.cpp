
#include "test.h"
#include "GUI.h"
#include <iostream>
#include <QtWidgets/QApplication>
#include <memory>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    string repositoryFile, repositoryHelperFile, repositoryHelperFilename;
    ifstream configurationFile("settings.txt");
    getline(configurationFile, repositoryFile);
    getline(configurationFile, repositoryHelperFile);

    if(repositoryHelperFile == "inMemory")
    {
        repositoryHelperFile = "";
    }
    else
    {
        int filenameStart = repositoryHelperFile.find(":");
        repositoryHelperFilename = repositoryHelperFile.substr(filenameStart + 2);
    }

    if(repositoryFile == "inMemory")
    {
        InMemoryRepository repository = InMemoryRepository();
        Service service = Service(repository);
        service.setRepositoryHelperFilenameService(repositoryHelperFilename);
        GUI gui{service};

        gui.show();
        return a.exec();
    }
    else
    {
        int filenameStart = repositoryFile.find(":");
        string filename = repositoryFile.substr(filenameStart + 2);
        FileRepository repository = FileRepository();
        Service service = Service(repository);
        service.setRepositoryFilenameService(filename);
        service.setRepositoryHelperFilenameService(repositoryHelperFilename);
        GUI gui{service};

        gui.show();
        return a.exec();
    }
}