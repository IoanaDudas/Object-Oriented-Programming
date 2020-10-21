
#include "UI.h"
#include <string>
#include <vector>

using namespace std;

#define A 1
#define B 2
#define Z 0

#define GoodCommand 10
#define BadCommand -1

void UI::printMenu()
{
    cout << endl;
    cout << "- chose a mode, A or B" << endl;
    cout << "Mode A:" << endl;
    cout << "- add title, filmedAt, creationDate, accessCount, footagePreview\n";
    cout << "- update title, newFilmedAt, newCreationDate, newAccessCount, newFootagePreview\n";
    cout << "- delete title\n";
    cout << "- list\n";
    cout << "- exit\n";
    cout << "Mode B:"<<endl;
    cout << "- next\n";
    cout << "- save title\n";
    cout << "- list filmedAt, accessCount\n";
    cout << "- mylist\n";
    cout << "- exit\n";

}

void UI::splitCommandArguments(const std::string userCommand, std::string &title, std::string &filmedAt, std::string &day, std::string &month, std::string &year, std::string &accessCount, std::string &footagePreview)
{
    int indexBeginning = 0, indexEnding, size;

    while (userCommand[indexBeginning] != ' ')
        indexBeginning++;
    indexBeginning++;

    //title
    indexEnding = indexBeginning;
    while (userCommand[indexEnding] != ',')
        indexEnding++;
    size = indexEnding-indexBeginning;
    title = userCommand.substr(indexBeginning,size);

    //filmedAt
    indexEnding += 2;
    indexBeginning = indexEnding;
    while (userCommand[indexEnding] != ',')
        indexEnding++;
    size = indexEnding - indexBeginning;
    filmedAt = userCommand.substr(indexBeginning, size);

    if(userCommand.find("-") != std::string::npos)
    {
        //day from creationDate
        indexEnding += 2;
        indexBeginning = indexEnding;
        while (userCommand[indexEnding] != '-')
            indexEnding++;
        size = indexEnding - indexBeginning;
        day = userCommand.substr(indexBeginning, size);

        //month from creationDate
        indexEnding += 1;
        indexBeginning = indexEnding;
        while (userCommand[indexEnding] != '-')
            indexEnding++;
        size = indexEnding - indexBeginning;
        month = userCommand.substr(indexBeginning, size);
    }

    //year from creationDate
    indexEnding += 1;
    indexBeginning = indexEnding;
    while (userCommand[indexEnding] != ',')
        indexEnding++;
    size = indexEnding - indexBeginning;
    year = userCommand.substr(indexBeginning, size);

    //accessCount
    indexEnding += 2;
    indexBeginning = indexEnding;
    while (userCommand[indexEnding] != ',')
        indexEnding++;
    size = indexEnding - indexBeginning;
    accessCount = userCommand.substr(indexBeginning, size);

    //footagePreview
    indexEnding += 2;
    indexBeginning = indexEnding;
    indexEnding = userCommand.length();
    size = indexEnding - indexBeginning;
    footagePreview = userCommand.substr(indexBeginning, size);
}

void UI::addTapeUI(const std::string userCommand)
{
    if (this->mode != A)
    {
        cout << "Wrong mode!\n";
        return;
    }
    std::string title, filmedAt, day, month, year, accessCount, footagePreview;
    splitCommandArguments(userCommand, title, filmedAt, day, month, year, accessCount, footagePreview);

    if (this->service.addTapeService(title, filmedAt, day, month, year, accessCount, footagePreview) == false)
        cout << "Invalid input!"<<endl;
}

void UI::updateTapeUI(const std::string userCommand)
{
    if (this->mode != A)
    {
        cout << "Wrong mode!\n";
        return;
    }
    std::string title, filmedAt, day, month, year, accessCount, footagePreview;
    splitCommandArguments(userCommand, title, filmedAt, day, month, year, accessCount, footagePreview);

    if (this->service.updateTapeService(title, filmedAt, day, month, year, accessCount, footagePreview) == false)
        cout << "Invalid input!"<<endl;
}

void UI::removeTapeUI(const std::string userCommand)
{
    if (this->mode != A)
    {
        cout << "Wrong mode!\n";
        return;
    }

    std::string title;
    int indexBeginning = 0, size;
    while (userCommand[indexBeginning] != ' ')
        indexBeginning++;
    indexBeginning++;
    size = userCommand.length() - indexBeginning;
    title = userCommand.substr(indexBeginning, size);

    if (this->service.removeTapeService(title) == false)
        cout << "Invalid input!"<<endl;
}

void UI::listTapesUI()
{
    if (this->mode != A)
    {
        cout << "Wrong mode!\n";
        return;
    }

    std::vector<TElem> tapeList = this->service.getAllTapesService();
    for (int index = 0; index < tapeList.size(); ++index)
    {
        cout << tapeList.at(index).toString() << endl;
    }
}

void UI::nextUI(int &currentIndex, std::vector<TElem> tapeListModeB)
{
    if (this->mode != B)
    {
        cout << "Wrong mode!\n";
        return;
    }
    cout << this->service.nextService().toString() << endl;
}

void UI::saveUI(const std::string userCommand, std::vector<TElem> tapeListModeB)
{
    if (this->mode != B)
    {
        cout << "Wrong mode!\n";
        return;
    }

    std::string title;
    int indexBeginning = 0, size;
    while (userCommand[indexBeginning] != ' ')
        indexBeginning++;
    indexBeginning++;
    size = userCommand.length() - indexBeginning;
    title = userCommand.substr(indexBeginning, size);

    if(this->service.saveTapeService(title, tapeListModeB)==false)
        cout << "Invalid input!" << endl;
}

void UI::listModeBUI(const std::string userCommand, std::vector<TElem> tapeListModeB)
{
    std::string filmedAt, accessCount;
    int indexBeginning = 0, indexEnding, size;

    while (userCommand[indexBeginning] != ' ')
        indexBeginning++;
    indexBeginning++;

    //title
    indexEnding = indexBeginning;
    while (userCommand[indexEnding] != ',')
        indexEnding++;
    size = indexEnding - indexBeginning;
    filmedAt = userCommand.substr(indexBeginning, size);

    //accessCount
    indexEnding += 2;
    indexBeginning = indexEnding;
    indexEnding = userCommand.length();
    size = indexEnding - indexBeginning;
    accessCount = userCommand.substr(indexBeginning, size);
    int accessCountInteger = std::stoi(accessCount);

    if (filmedAt != "" && accessCount != "")
    {
        std::vector<TElem> tapeList = this->service.getAllTapesService();
        for (int index = 0; index < tapeList.size(); ++index)
            if (tapeList.at(index).getFilmedAt() == filmedAt && tapeList.at(index).getAccessCount() < accessCountInteger)
                cout << tapeList.at(index).toString() << endl;
        return;
    }
    if (filmedAt == "" && accessCount != "")
    {
        std::vector<TElem> tapeList = this->service.getAllTapesService();
        for (int index = 0; index < tapeList.size(); ++index)
            if (tapeList.at(index).getAccessCount() < accessCountInteger)
                cout << tapeList.at(index).toString() << endl;
        return;
    }
}

void UI::mylistUI()
{
    if (this->mode != B)
    {
        cout << "Wrong mode!\n";
        return;
    }

    std::vector<TElem> helperTapeList = this->service.getAllHelperTapesService();
    for (int index = 0; index < helperTapeList.size(); ++index)
    {
        cout << helperTapeList.at(index).toString() << endl;
    }
}

void UI::setRepositoryFilenameUI(string filename)
{
    this->service.setRepositoryFilenameService(filename);
}

void UI::setRepositoryHelperFilenameUI(string filename)
{
    this->service.setRepositoryHelperFilenameService(filename);
}

void UI::pathRepositoryUI()
{
    cout<<"Introduce path repository: ";
    string wholePath = "";
    std::getline(std::cin, wholePath);

    int indexBeginning = 0, indexEnding, size;

    while (wholePath[indexBeginning] != ' ')
        indexBeginning++;
    indexBeginning++;

    indexEnding = indexBeginning;
    indexEnding = wholePath.length();
    size = indexEnding - indexBeginning;
    string path = wholePath.substr(indexBeginning, size);

    setRepositoryFilenameUI(path);
}

void UI::pathRepositoryHelperUI()
{
    cout<<"Introduce path mylist: ";
    string wholePath = "";
    std::getline(std::cin, wholePath);

    int indexBeginning = 0, indexEnding, size;

    while (wholePath[indexBeginning] != ' ')
        indexBeginning++;
    indexBeginning++;

    indexEnding = indexBeginning;
    indexEnding = wholePath.length();
    size = indexEnding - indexBeginning;
    string path = wholePath.substr(indexBeginning, size);

    setRepositoryHelperFilenameUI(path);
}

void UI::run()
{
    pathRepositoryUI();
    pathRepositoryHelperUI();

    std::vector<TElem> tapeListModeB;
    this->mode = Z;
    int currentIndexModeB = 0;
    printMenu();

    while (true)
    {
        try
        {
            int currentCommand = BadCommand;
            std::string userCommand;
            std::cout<<"->";
            std::getline(std::cin, userCommand);

            if (userCommand == "mode A")
            {
                this->mode = A;
                currentCommand = GoodCommand;
            }
            if (userCommand == "mode B")
            {
                this->mode = B;
                tapeListModeB = this->service.getAllTapesService();
                currentCommand = GoodCommand;
            }

            if (userCommand.find("add") == 0)
            {
                addTapeUI(userCommand);
                currentCommand = GoodCommand;
            }
            if (userCommand.find("update") == 0)
            {
                updateTapeUI(userCommand);
                currentCommand = GoodCommand;
            }
            if (userCommand.find("delete") == 0)
            {
                removeTapeUI(userCommand);
                currentCommand = GoodCommand;
            }
            if (userCommand=="list")
            {
                listTapesUI();
                currentCommand = GoodCommand;
            }

            if (userCommand == "next")
            {
                nextUI(currentIndexModeB, tapeListModeB);
                currentCommand = GoodCommand;
            }
            if (userCommand.find("save") == 0)
            {
                saveUI(userCommand, tapeListModeB);
                currentCommand = GoodCommand;
            }
            if (userCommand == "mylist")
            {
                mylistUI();
                currentCommand = GoodCommand;
            }
            if (userCommand.find("list") == 0 && userCommand != "list")
            {
                listModeBUI(userCommand,tapeListModeB);
                currentCommand = GoodCommand;
            }

            if (userCommand.find("exit") == 0)
            {
                this->service.destructorRepositoryHelper();
                return;
            }
            if (currentCommand == BadCommand)
                cout << "Invalid command!" << endl;
        }
        catch (AddException exceptionAdd)
        {
            cout << exceptionAdd.what();
        }
        catch(RemoveException exceptionRemove)
        {
            cout << exceptionRemove.what();
        }
        catch(UpdateException exceptionUpdate)
        {
            cout << exceptionUpdate.what();
        }
        catch (SaveException exceptionSave)
        {
            cout << exceptionSave.what();
        }
        catch (ValidationEmptyException exceptionEmpty)
        {
            cout << exceptionEmpty.what();
        }
        catch (ValidationDateException exceptionDate)
        {
            cout << exceptionDate.what();
        }
        catch (ValidationNumberException exceptionNumber)
        {
            cout << exceptionNumber.what();
        }
        catch (...)
        {
            cout << "Error!\n";
        }
    }
}