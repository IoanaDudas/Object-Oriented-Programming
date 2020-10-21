
#include "GUI.h"


GUI::GUI(Service &service) : service{service}
{
    this->initializeGUI();
    this->populateList();
    this->connectSignalsAndSlots();
}


void GUI::initializeGUI()
{
    this->tapeListWidget = new QListWidget{};
    this->titleLineEdit = new QLineEdit{};
    this->filmedAtLineEdit = new QLineEdit{};
    this->creationDateLineEdit = new QLineEdit{};
    this->accessCountLineEdit = new QLineEdit{};
    this->footagePreviewLineEdit  = new QLineEdit{};
    this->addButton = new QPushButton{"Add"};
    this->deleteButton = new QPushButton{"Remove"};
    this->updateButton   = new QPushButton{"Update"};


    QVBoxLayout* mainLayout = new QVBoxLayout {this};
    setWindowTitle(tr("Tapes"));
    mainLayout->addWidget(this->tapeListWidget);


    QGridLayout* tapeDetailsLayout = new QGridLayout{};

    tapeDetailsLayout->addWidget(new QLabel("Title:", this));
    tapeDetailsLayout->addWidget(this->titleLineEdit);
    tapeDetailsLayout->addWidget(new QLabel("Filmed at:", this));
    tapeDetailsLayout->addWidget(this->filmedAtLineEdit);
    tapeDetailsLayout->addWidget(new QLabel("Creation date:", this));
    tapeDetailsLayout->addWidget(this->creationDateLineEdit);
    tapeDetailsLayout->addWidget(new QLabel("Access count:", this));
    tapeDetailsLayout->addWidget(this->accessCountLineEdit);
    tapeDetailsLayout->addWidget(new QLabel("Footage preview:", this));
    tapeDetailsLayout->addWidget(this->footagePreviewLineEdit);

//    tapeDetailsLayout->addRow("Title:", this->titleLineEdit);
//    tapeDetailsLayout->addRow("Filmed at:", this->filmedAtLineEdit);
//    tapeDetailsLayout->addRow("Creation date:", this->creationDateLineEdit);
//    tapeDetailsLayout->addRow("Access count:", this->accessCountLineEdit);
//    tapeDetailsLayout->addRow("Footage preview:", this->footagePreviewLineEdit);

    mainLayout->addLayout(tapeDetailsLayout);

    QGridLayout* buttonsLayout = new QGridLayout {};
    buttonsLayout->addWidget(this->addButton, 0, 0);
    buttonsLayout->addWidget(this->deleteButton, 0, 1);
    buttonsLayout->addWidget(this->updateButton, 0, 2);

    mainLayout->addLayout(buttonsLayout);

    QPalette palette;
    QColor coral = QColor(250, 128, 128);
    QColor black = QColor(0, 0, 0);
    QColor yellow = QColor(251, 247, 153);
    QColor indigo = QColor(151, 177, 249);
    palette.setColor(QPalette::Window, coral);
    palette.setColor(QPalette::Base, yellow);
    palette.setColor(QPalette::Text, black);
    palette.setColor(QPalette::Foreground, black);
    palette.setColor(QPalette::ButtonText, black);
    setPalette(palette);

    QFont font("AppleGothic", 13, QFont::Bold);
    //font.setFamily("AppleGothic");
    //font.setWeight(QFont::Bold);
    setFont(font);
}


void GUI::populateList()
{
    this->tapeListWidget->clear();

    vector<TElem> tapeList = this->service.getAllTapesService();
    for(auto &current : tapeList)
        this->tapeListWidget->addItem(QString::fromStdString(current.toString())) ;


}


void GUI::connectSignalsAndSlots()
{
    QObject::connect(this->tapeListWidget, &QListWidget::itemSelectionChanged, [this](){
        int selectedIndex = getSelectedIndex();

        if(selectedIndex < 0)
            return ;
        Tape tape = this->service.getAllTapesService()[selectedIndex];
        this->titleLineEdit->setText(QString::fromStdString(tape.getTitle()));
        this->filmedAtLineEdit->setText(QString::fromStdString(tape.getFilmedAt()));
        this->creationDateLineEdit->setText(QString::fromStdString(tape.getCreationDate().toString()));
        this->accessCountLineEdit->setText(QString::fromStdString(to_string(tape.getAccessCount())));
        this->footagePreviewLineEdit->setText(QString::fromStdString(tape.getFootagePreview()));
    });

    QObject::connect(this->addButton, &QPushButton::clicked, this, &GUI::addTapeGUI);
    QObject::connect(this->deleteButton, &QPushButton::clicked, this,  &GUI::removeTapeGUI);
    QObject::connect(this->updateButton, &QPushButton::clicked, this, &GUI::updateTapeGUI);
}


int GUI::getSelectedIndex() const
{
    QModelIndexList selectedIndexes = this->tapeListWidget->selectionModel()->selectedIndexes();
    if(selectedIndexes.size() == 0)
    {
        this->titleLineEdit->clear();
        this->filmedAtLineEdit->clear();
        this->creationDateLineEdit->clear();
        this->accessCountLineEdit->clear();
        this->footagePreviewLineEdit ->clear();
        return -1;
    }
    int selectedIndex = selectedIndexes.at(0).row();
    return selectedIndex;
}


void GUI::addTapeGUI()
{
    string title = this->titleLineEdit->text().toStdString();
    string filmedAt = this->filmedAtLineEdit->text().toStdString();
    string footagePreview = this->footagePreviewLineEdit->text().toStdString();
    string creationDate = this->creationDateLineEdit->text().toStdString();
    string accessCount = this->accessCountLineEdit->text().toStdString();

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

    this->tapeListWidget->setCurrentRow(lastTape);
}


void GUI::removeTapeGUI()
{
    int selectedIndex = this->getSelectedIndex();
    if(selectedIndex < 0)
    {
        QMessageBox::critical(this, "Error", "No song was selected!");
        return;
    }
    string title = this->service.getAllTapesService()[selectedIndex].getTitle();

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
    string title = this->titleLineEdit->text().toStdString();
    string filmedAt = this->filmedAtLineEdit->text().toStdString();
    string footagePreview = this->footagePreviewLineEdit->text().toStdString();
    string creationDate = this->creationDateLineEdit->text().toStdString();
    string accessCount = this->accessCountLineEdit->text().toStdString();

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