#include "GUI.h"
#include "ui_GUI.h"

GUI::GUI(Service& service, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GUI)
    , service{service}
{
    ui->setupUi(this);
    this->populateList();
    this->populateMyList();
    this->connectSignalsAndSlots();
    this->modeA();
}

GUI::~GUI()
{
    delete ui;
}


void GUI::populateList()
{
    this->ui->allTapesListWidget->clear();

    vector<TElem> tapeList = this-> service.getAllTapesService();
    for(auto &current : tapeList)
        this->ui->allTapesListWidget->addItem(QString::fromStdString(current.toString())) ;

}


void GUI::connectSignalsAndSlots()
{
    QObject::connect(this->ui->allTapesListWidget, &QListWidget::itemSelectionChanged, [this](){
        int selectedIndex = getSelectedIndex();

        if(selectedIndex < 0)
            return ;
        Tape tape = this->service.getAllTapesService()[selectedIndex];
        this->ui->titleLineEdit->setText(QString::fromStdString(tape.getTitle()));
        this->ui->filmedAtLineEdit->setText(QString::fromStdString(tape.getFilmedAt()));
        this->ui->creationDateLineEdit->setText(QString::fromStdString(tape.getCreationDate().toString()));
        this->ui->accessCountLineEdit->setText(QString::fromStdString(to_string(tape.getAccessCount())));
        this->ui->footagePreviewLineEdit->setText(QString::fromStdString(tape.getFootagePreview()));
    });

    QObject::connect(this->ui->addButton, &QPushButton::clicked, this, &GUI::addTapeGUI);
    QObject::connect(this->ui->deleteButton, &QPushButton::clicked, this,  &GUI::removeTapeGUI);
    QObject::connect(this->ui->updateButton, &QPushButton::clicked, this, &GUI::updateTapeGUI);
    QObject::connect(this->ui->saveButton, &QPushButton::clicked, this, &GUI::saveTapeGUI);
    QObject::connect(this->ui->openButton, &QPushButton::clicked, this, &GUI::openFile);
    QObject::connect(this->ui->filterButton, &QPushButton::clicked, this, &GUI::filterTapesGUI);
    QObject::connect(this->ui->nextButton, &QPushButton::clicked, this, &GUI::nextTapeGUI);
    QObject::connect(this->ui->ModeAButton, &QPushButton::clicked, this, &GUI::modeA);
    QObject::connect(this->ui->ModeBButton, &QPushButton::clicked, this, &GUI::modeB);
    QObject::connect(this->ui->undoButton, &QPushButton::clicked, this, &GUI::undo);
    QObject::connect(this->ui->redoButton, &QPushButton::clicked, this, &GUI::redo);
    QObject::connect(this->ui->openButton_2, &QPushButton::clicked, this, &GUI::openWidget);

    QShortcut* shortcutUndo = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_Z), this);
    QObject::connect(shortcutUndo, &QShortcut::activated, this, &GUI::undo);
    QShortcut* shortcutRedo = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_Y), this);
    QObject::connect(shortcutRedo, &QShortcut::activated, this, &GUI::redo);
    QShortcut* shortcutDelete = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_D), this);
    QObject::connect(shortcutDelete, &QShortcut::activated, this, &GUI::removeTapeGUI);
    QShortcut* shortcutAdd = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_E), this);
    QObject::connect(shortcutAdd, &QShortcut::activated, this, &GUI::addTapeGUI);
    QShortcut* shortcutUpdate = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_U), this);
    QObject::connect(shortcutUpdate, &QShortcut::activated, this, &GUI::updateTapeGUI);
    QShortcut* shortcutSave = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_S), this);
    QObject::connect(shortcutSave, &QShortcut::activated, this, &GUI::saveTapeGUI);
    QShortcut* shortcutNext = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_N), this);
    QObject::connect(shortcutNext, &QShortcut::activated, this, &GUI::nextTapeGUI);
    QShortcut* modeA = new QShortcut(Qt::Key_A, this);
    QObject::connect(modeA, &QShortcut::activated, this, &GUI::modeA);;
    QShortcut* modeB = new QShortcut(Qt::Key_B, this);
    QObject::connect(modeB, &QShortcut::activated, this, &GUI::modeB);

}


int GUI::getSelectedIndex() const
{
    QModelIndexList selectedIndexes = this->ui->allTapesListWidget->selectionModel()->selectedIndexes();
    if(selectedIndexes.size() == 0)
    {
        this->ui->titleLineEdit->clear();
        this->ui->filmedAtLineEdit->clear();
        this->ui->creationDateLineEdit->clear();
        this->ui->accessCountLineEdit->clear();
        this->ui->footagePreviewLineEdit ->clear();
        return -1;
    }
    int selectedIndex = selectedIndexes.at(0).row();
    return selectedIndex;
}


void GUI::openWidget()
{
    this->mylistGui = new mylistGUI(this->service);
    this->mylistGui->show();
    this->service.addObserver(this->mylistGui);
}


void GUI::addTapeGUI()
{
    if(this->mode != "A")
    {
        QMessageBox::critical(this, "Error", "Wrong mode!");
        return;
    }

    string title = this->ui->titleLineEdit->text().toStdString();
    string filmedAt = this->ui->filmedAtLineEdit->text().toStdString();
    string footagePreview = this->ui->footagePreviewLineEdit->text().toStdString();
    string creationDate = this->ui->creationDateLineEdit->text().toStdString();
    string accessCount = this->ui->accessCountLineEdit->text().toStdString();
    if(title == "" or filmedAt == "" or footagePreview == "" or creationDate == "" or accessCount == "")
    {
        QMessageBox::critical(this, "Error", "No tape selected!");
        return;
    }

    string day = creationDate.substr(0, 2);
    string month = creationDate.substr(3, 2);
    string year = creationDate.substr(6, creationDate.size());

    try
    {
        this->service.addTapeService(title, filmedAt, day, month, year, accessCount, footagePreview);
    }
    catch (AddException exceptionAdd)
    {
        QMessageBox::critical(this, "Error", exceptionAdd.what());
        return;
    }
    catch (ValidationEmptyException exceptionEmpty)
    {
        QMessageBox::critical(this, "Error", exceptionEmpty.what());
        return;
    }
    catch (ValidationDateException exceptionDate)
    {
        QMessageBox::critical(this, "Error", exceptionDate.what());
        return;
    }
    catch (ValidationNumberException exceptionNumber)
    {
        QMessageBox::critical(this, "Error", exceptionNumber.what());
        return;
    }


    this->populateList();
    int lastTape = this->service.getAllTapesService().size() - 1;

    this->ui->allTapesListWidget->setCurrentRow(lastTape);
}


void GUI::removeTapeGUI()
{
    if(this->mode != "A")
    {
        QMessageBox::critical(this, "Error", "Wrong mode!");
        return;
    }

    int selectedIndex = this->getSelectedIndex();
    if(selectedIndex < 0)
    {
        QMessageBox::critical(this, "Error", "No tape was selected!");
        return;
    }
    string title = this->service.getAllTapesService()[selectedIndex].getTitle();
    if(title == "")
    {
        QMessageBox::critical(this, "Error", "No tape selected!");
        return;
    }
    try
    {
        this->service.removeTapeService(title);
    }
    catch (RemoveException exceptionRemove)
    {
        QMessageBox::critical(this, "Error", exceptionRemove.what());
        return;
    }

    this->populateList();
}


void GUI::updateTapeGUI()
{
    if(this->mode != "A")
    {
        QMessageBox::critical(this, "Error", "Wrong mode!");
        return;
    }

    string title = this->ui->titleLineEdit->text().toStdString();
    string filmedAt = this->ui->filmedAtLineEdit->text().toStdString();
    string footagePreview = this->ui->footagePreviewLineEdit->text().toStdString();
    string creationDate = this->ui->creationDateLineEdit->text().toStdString();
    string accessCount = this->ui->accessCountLineEdit->text().toStdString();

    if(title == "" or filmedAt == "" or footagePreview == "" or creationDate == "" or accessCount == "")
    {
        QMessageBox::critical(this, "Error", "No tape selected!");
        return;
    }

    string day = creationDate.substr(0, 2);
    string month = creationDate.substr(3, 2);
    string year = creationDate.substr(6, creationDate.size());

    try
    {
        this->service.updateTapeService(title, filmedAt, day, month, year, accessCount, footagePreview);
    }
    catch (UpdateException exceptionUpdate)
    {
        QMessageBox::critical(this, "Error", exceptionUpdate.what());
        return;
    }
    catch (ValidationEmptyException exceptionEmpty)
    {
        QMessageBox::critical(this, "Error", exceptionEmpty.what());
        return;
    }
    catch (ValidationDateException exceptionDate)
    {
        QMessageBox::critical(this, "Error", exceptionDate.what());
        return;
    }
    catch (ValidationNumberException exceptionNumber)
    {
        QMessageBox::critical(this, "Error", exceptionNumber.what());
        return;
    }

    this->populateList();
}

void GUI::populateMyList()
{
    this->ui->myListWidget->clear();

    vector<TElem> tapeList = this-> service.getAllHelperTapesService();
    for(auto &current : tapeList)
        this->ui->myListWidget->addItem(QString::fromStdString(current.toString())) ;
}

void GUI::saveTapeGUI()
{
    if(this->mode != "B")
    {
        QMessageBox::critical(this, "Error", "Wrong mode!");
        return;
    }

    vector<TElem> allTapes = this->service.getAllTapesService();
    string title = this->ui->titleLineEdit->text().toStdString();
    try
    {
        this->service.saveTapeService(title, allTapes);
    }
    catch (SaveException exceptionSave)
    {
        QMessageBox::critical(this, "Error", exceptionSave.what());
        return;
    }
    this->populateMyList();
}

void GUI::nextTapeGUI()
{
    if(this->mode != "B")
    {
        QMessageBox::critical(this, "Error", "Wrong mode!");
        return;
    }

    Tape tape = this->service.nextService();
    vector<TElem> tapeList = this-> service.getAllTapesService();

    for(int i = 0; i < this->ui->allTapesListWidget->count(); ++i)
    {
        if(tape.getTitle() == tapeList.at(i).getTitle())
        {
            QListWidgetItem* item = this->ui->allTapesListWidget->item(i);
            this->ui->allTapesListWidget->setCurrentItem(item);
        }
    }
}

void GUI::filterTapesGUI()
{
    if(this->mode != "B")
    {
        QMessageBox::critical(this, "Error", "Wrong mode!");
        return;
    }

    string filmedAt = this->ui->filmedAtFilterLineEdit->text().toStdString();
    string accessCount = this->ui->accessCounFilterLineEdit->text().toStdString();

    if (filmedAt == "" && accessCount == "")
    {
        QMessageBox::critical(this, "Error", "Access count cannot be empty!");
        return;
    }

    int accessCountInteger = stoi(accessCount);
    vector<TElem> filteredTapes;

    if (filmedAt != "" && accessCount != "")
    {
        std::vector<TElem> tapeList = this->service.getAllTapesService();
        for (int index = 0; index < tapeList.size(); ++index)
            if (tapeList.at(index).getFilmedAt().find(filmedAt) != std::string::npos && tapeList.at(index).getAccessCount() < accessCountInteger)
                filteredTapes.push_back(tapeList.at(index));
        this->populateFilter(filteredTapes);
        return;
    }
    if (filmedAt == "" && accessCount != "")
    {
        std::vector<TElem> tapeList = this->service.getAllTapesService();
        for (int index = 0; index < tapeList.size(); ++index)
            if (tapeList.at(index).getAccessCount() < accessCountInteger)
                filteredTapes.push_back(tapeList.at(index));
        this->populateFilter(filteredTapes);
        return;
    }
}

void GUI::openFile()
{
    this->service.openFileService();
}

void GUI::populateFilter(vector<TElem> filteredVector)
{
    this->ui->filterList->clear();

    for(auto &current : filteredVector)
        this->ui->filterList->addItem(QString::fromStdString(current.toString()));
}

void GUI::modeA()
{
    this->mode = "A";
}

void GUI::modeB()
{
    this->mode = "B";
}

void GUI::undo()
{
    bool result;
    result = this->service.undo();
    this->populateList();
    if(result==false)
        QMessageBox::critical(this, "Error", "No more undos!");
}

void GUI::redo()
{
    bool result;
    result = this->service.redo();
    this->populateList();
    if (result == false)
        QMessageBox::critical(this, "Error", "No more redos!");
}