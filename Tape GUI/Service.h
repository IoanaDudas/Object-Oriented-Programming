#pragma once

#include "Repository.h"
#include "RepositoryHelper.h"
#include "FileRepository.h"
#include "InMemoryRepository.h"
#include "CSVRepositoryHelper.h"
#include "HTMLRepositoryHelper.h"
#include "InMemoryRepositoryHelper.h"
#include <cctype>
#include <string>
#include <vector>
#include "Exceptions.h"
#include "Validator.h"
#include "Action.h"
#include "Observer.h"

class Service : public Subject
{
private:
    Repository& repository;
    RepositoryHelper* repositoryHelper;
    Validator validator;
    vector<unique_ptr<Action>> undoStack{};
    vector<unique_ptr<Action>> redoStack{};
public:
    //constructor for service
    Service(Repository& tapeRepository) : repository(tapeRepository){}

    //returns all the tapes in the repository
    std::vector<TElem> getAllTapesService() const;

    std::vector<TElem> getAllHelperTapesService() const;

    //adds a tape to the repository
    bool addTapeService(const std::string title, const std::string filmedAt, const std::string day,  const std::string month,  const std::string year, std::string accessCount, const std::string footagePreview);

    //updates a tape from the repository
    bool updateTapeService(const std::string title, const std::string filmedAt, const std::string day,  const std::string month,  const std::string year, std::string accessCount, const std::string footagePreview);

    bool saveTapeService(const std::string& title, std::vector<TElem> tapeListModeB);

    bool undo();

    bool redo();

    TElem nextService();

    //removes a tape from the repository
    bool removeTapeService(const std::string& title);

    void setRepositoryFilenameService(string filename);

    void setRepositoryHelperFilenameService(string filename);

    void destructorRepositoryHelper();

    void openFileService();

private:
    //checks to see if a given std::string is a number
    bool isNumber(const std::string& string);

};
