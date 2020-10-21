
#include "HTMLRepositoryHelper.h"


bool HTMLRepositoryHelper::saveTape(const Tape &tape)
{
    fstream inFile;
    inFile.open(this->filename);
    vector<TElem> tapeVector = readHTML();

    for(auto &current : tapeVector)
    {
        if (current.getTitle() == tape.getTitle())
        {
            inFile.close();
            throw SaveException{"Error saving tape!\n"};
        }
    }
    inFile.close();
    tapeVector.push_back(tape);
    writeHTML(tapeVector);
    return 1;
}

std::vector<TElem> HTMLRepositoryHelper::getAllHelperTapes() const
{
    vector<TElem> tapeVector = readHTML();
    return tapeVector;
}

void HTMLRepositoryHelper::open()
{
    string app = "open -a 'Google Chrome' " + this->filename;
    system(app.c_str());
}

void HTMLRepositoryHelper::setFilename(string filename)
{
    this->filename = filename;
    fstream inFile;
    inFile.open(this->filename);
    inFile.close();
}

std::vector<TElem> HTMLRepositoryHelper::readHTML() const
{
    fstream inFile;
    inFile.open(this->filename);
    int tapeCount = 100;
    string title, filmedAt, footagePreview, day, month, year, accessCount;
    vector<TElem> newVector;
    {
        std::string line;
        while (std::getline(inFile, line))
        {
            string newLine = line;
            if(newLine.find("</tr>") != std::string::npos)
            {
                tapeCount = 0;
                title = "";
                filmedAt = "";
                footagePreview = "";
                day = "";
                month = "";
                year = "";
                accessCount = "";
            }
            if(newLine.find("<td>") != std::string::npos and tapeCount == 4)
            {
                int indexBeginning = 0, indexEnding, size;

                while (newLine[indexBeginning] != '>')
                    indexBeginning++;
                indexBeginning++;

                indexEnding = indexBeginning;
                indexEnding = newLine.length() - 5;
                size = indexEnding - indexBeginning;
                footagePreview = newLine.substr(indexBeginning, size);
                tapeCount++;
                Date date = Date(stoi(day), stoi(month), stoi(year));
                Tape tape = Tape(title, filmedAt, date, stoi(accessCount), footagePreview);
                newVector.push_back(tape);
            }
            if(newLine.find("<td>") != std::string::npos and tapeCount == 3)
            {
                int indexBeginning = 0, indexEnding, size;

                while (newLine[indexBeginning] != '>')
                    indexBeginning++;
                indexBeginning++;

                indexEnding = indexBeginning;
                indexEnding = newLine.length() - 5;
                size = indexEnding - indexBeginning;
                accessCount = newLine.substr(indexBeginning, size);
                tapeCount++;
            }
            if(newLine.find("<td>") != std::string::npos and tapeCount == 2)
            {
                int indexBeginning = 0, indexEnding, size;

                while (newLine[indexBeginning] != '>')
                    indexBeginning++;
                indexBeginning++;

                if (newLine.find("-") != std::string::npos) {
                    indexEnding = indexBeginning;
                    while (newLine[indexEnding] != '-')
                        indexEnding++;
                    size = indexEnding - indexBeginning;
                    day = newLine.substr(indexBeginning, size);

                    indexEnding += 1;
                    indexBeginning = indexEnding;
                    while (newLine[indexEnding] != '-')
                        indexEnding++;
                    size = indexEnding - indexBeginning;
                    month = newLine.substr(indexBeginning, size);
                }
                indexEnding += 1;
                indexBeginning = indexEnding;
                while (newLine[indexEnding] != '<')
                    indexEnding++;
                size = indexEnding - indexBeginning;
                year = newLine.substr(indexBeginning, size);
                tapeCount++;
            }
            if(newLine.find("<td>") != std::string::npos and tapeCount == 1)
            {
                int indexBeginning = 0, indexEnding, size;

                while (newLine[indexBeginning] != '>')
                    indexBeginning++;
                indexBeginning++;

                indexEnding = indexBeginning;
                indexEnding = newLine.length() - 5;
                size = indexEnding - indexBeginning;
                filmedAt = newLine.substr(indexBeginning, size);
                tapeCount++;
            }
            if(newLine.find("<td>") != std::string::npos and tapeCount == 0)
            {
                int indexBeginning = 0, indexEnding, size;

                while (newLine[indexBeginning] != '>')
                    indexBeginning++;
                indexBeginning++;

                indexEnding = indexBeginning;
                indexEnding = newLine.length() - 5;
                size = indexEnding - indexBeginning;
                title = newLine.substr(indexBeginning, size);
                tapeCount++;
            }
        }
    }
    inFile.close();
    return newVector;
}

void HTMLRepositoryHelper::writeHTML(std::vector<TElem> tapeVector)
{
    fstream inFile;
    inFile.open(filename, std::ofstream::out);
    inFile.close();
    inFile.open(filename, std::ios::out);
    if(tapeVector.empty())
        inFile<<"<!DOCTYPE html> <html>\n<head>\n<title>Tapes</title>\n</head>\n\n<body>\n<table border=\"1\">\n<tr>\n<td>Title</td>\n"<<
              "<td>Filmed at</td>\n<td>Creation Date</td>\n<td>Access Count</td>\n<td>Footage Preview</td>\n</tr>\n</table>\n</body>\n</html>\n";
    else
    {

        inFile<<"<!DOCTYPE html> <html>\n<head>\n<title>Tapes</title>\n</head>\n\n<body>\n<table border=\"1\">\n<tr>\n"<<
              "<td>Title</td>\n<td>Filmed at</td>\n<td>Creation Date</td>\n<td>Access Count</td>\n<td>Footage Preview</td>\n</tr>\n";
        for(auto &current : tapeVector)
        {
            inFile<<"<tr>\n<td>"<<current.getTitle()<<"</td>\n";
            inFile<<"<td>"<<current.getFilmedAt()<<"</td>\n";
            inFile<<"<td>"<<current.getCreationDate().toString()<<"</td>\n";
            inFile<<"<td>"<<current.getAccessCount()<<"</td>\n";
            inFile<<"<td>"<<current.getFootagePreview()<<"</td>\n</tr>\n";
        }
        inFile<<"</table>\n</body>\n</html>\n";
    }
    inFile.close();
}