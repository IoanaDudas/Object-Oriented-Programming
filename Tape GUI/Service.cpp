
#include "Service.h"

using namespace std;

vector<TElem> Service::getAllTapesService() const
{
    return this->repository.getAllTapes();
}

vector<TElem> Service::getAllHelperTapesService() const
{
    return this->repositoryHelper->getAllHelperTapes();
}

bool Service::addTapeService(const std::string title, const std::string filmedAt, const std::string day,  const std::string month,  const std::string year, const std::string accessCount, const std::string footagePreview)
{
    validator.validateStringEmpty(title);
    validator.validateStringEmpty(filmedAt);
    validator.validateStringEmpty(day);
    validator.validateStringEmpty(month);
    validator.validateStringEmpty(year);
    validator.validateStringEmpty(accessCount);
    validator.validateStringEmpty(footagePreview);

    if (isNumber(day) == false)
        return false;
    int dayInteger = std::stoi(day);
    if (isNumber(month) == false)
        return false;
    int monthInteger = std::stoi(month);
    if (isNumber(year) == false)
        return false;
    int yearInteger = std::stoi(year);
    if (isNumber(accessCount) == false)
        return false;

    validator.validaAccessCount(accessCount);
    validator.validateFilmedAtAllLetters(filmedAt);

    int accessCountInteger = std::stoi(accessCount);


    Date creationDate = Date(dayInteger, monthInteger, yearInteger);
    validator.validateDate(creationDate);

    Tape tape = Tape(title, filmedAt, creationDate, accessCountInteger, footagePreview);

    bool result;
    result = this->repository.addTape(tape);
    if (result == true)
    {
        unique_ptr<Action> addAction = make_unique<ActionAdd>(this->repository, tape);
        undoStack.push_back(move(addAction));
    }
    return result;
}

bool Service::updateTapeService(const std::string title, const std::string filmedAt, const std::string day,  const std::string month,  const std::string year, const std::string accessCount, const std::string footagePreview)
{
    validator.validateStringEmpty(title);
    validator.validateStringEmpty(filmedAt);
    validator.validateStringEmpty(day);
    validator.validateStringEmpty(month);
    validator.validateStringEmpty(year);
    validator.validateStringEmpty(accessCount);
    validator.validateStringEmpty(footagePreview);

    if (isNumber(day) == false)
        return false;
    int dayInteger = std::stoi(day);
    if (isNumber(month) == false)
        return false;
    int monthInteger = std::stoi(month);
    if (isNumber(year) == false)
        return false;
    int yearInteger = std::stoi(year);
    if (isNumber(accessCount) == false)
        return false;

    validator.validaAccessCount(accessCount);
    validator.validateFilmedAtAllLetters(filmedAt);

    int accessCountInteger = std::stoi(accessCount);

    Date creationDate = Date(dayInteger, monthInteger, yearInteger);
    validator.validateDate(creationDate);

    Tape oldTape;
    for (auto tapeInVector : this->repository.getAllTapes())
        if (tapeInVector.getTitle() == title)
            oldTape = tapeInVector;

    Tape newTape = Tape(title, filmedAt, creationDate, accessCountInteger, footagePreview);
    bool result = this->repository.updateTape(newTape);
    if (result == true)
    {
        unique_ptr<Action> updateAction = make_unique<ActionUpdate>(this->repository, oldTape, newTape);
        this->undoStack.push_back(move(updateAction));
    }
    return result;
}

bool Service::removeTapeService(const std::string &title)
{
    validator.validateStringEmpty(title);

    Tape tape;
    for (auto tapeInVector : this->repository.getAllTapes())
        if (tapeInVector.getTitle() == title)
            tape = tapeInVector;

    bool result = this->repository.removeTape(title);
    if (result == true)
    {
        unique_ptr<Action> removeAction = make_unique<ActionRemove>(this->repository, tape);
        undoStack.push_back(move(removeAction));
    }
}

bool Service::undo()
{
    if (this->undoStack.size() == 0)
        return false;

    unique_ptr<Action> undoAction = move(this->undoStack.back());
    this->undoStack.pop_back();
    undoAction->executeUndo();
    this->redoStack.push_back(move(undoAction));

    return true;
}

bool Service::redo()
{
    if (this->redoStack.size() == 0)
        return false;

    unique_ptr<Action> redoAction = move(this->redoStack.back());
    this->redoStack.pop_back();
    redoAction->executeRedo();
    this->undoStack.push_back(move(redoAction));

    return true;
}

bool Service::saveTapeService(const std::string &title, std::vector<TElem> tapeListModeB)
{
    Tape tape = Tape();

    for (int index = 0; index < tapeListModeB.size(); ++index)
        if (tapeListModeB.at(index).getTitle() == title)
            tape = tapeListModeB.at(index);

    if (tape.getTitle() == "")
        return false;

    bool result = this->repositoryHelper->saveTape(tape);
    this->notify();
    return result;
}

TElem Service::nextService()
{
    return this->repository.nextRepository();
}


bool Service::isNumber(const std::string& string)
{
    std::string::const_iterator stringIterator = string.begin();
    while (stringIterator != string.end() && std::isdigit(*stringIterator))
        ++stringIterator;
    if (!string.empty() && stringIterator == string.end())
        return true;
    return false;
}

void Service::setRepositoryFilenameService(string filename)
{
    this->repository.setFilename(filename);
}

void Service::setRepositoryHelperFilenameService(string filename)
{
    if(filename == "")
    {
        this->repositoryHelper = new InMemoryRepositoryHelper();
        return;
    }

    int indexBeginning = 0, indexEnding, size;

    while (filename[indexBeginning] != '.')
        indexBeginning++;
    indexBeginning++;

    indexEnding = indexBeginning;
    indexEnding = filename.length();
    size = indexEnding - indexBeginning;
    string typeOfFilename = filename.substr(indexBeginning, size);

    if(strcmp(typeOfFilename.c_str(), "csv" ) == 0)
    {
        this->repositoryHelper = new CSVRepositoryHelper();
    }
    else if(strcmp(typeOfFilename.c_str(), "html" ) == 0)
    {
        this->repositoryHelper = new HTMLRepositoryHelper();
    }
    this->repositoryHelper->setFilename(filename);
}

void Service::destructorRepositoryHelper()
{
    delete this->repositoryHelper;
}

void Service::openFileService()
{
    this->repositoryHelper->open();
}
