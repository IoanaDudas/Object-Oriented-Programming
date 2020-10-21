#pragma once
#include <qwidget.h>
#include "Service.h"
#include <qlistwidget.h>
#include <qlineedit.h>
#include <qpushbutton.h>
#include <vector>
#include <QLayout>
#include <QFormLayout>
#include <QMessageBox>
#include <QLabel>
#include <QFont>

using namespace std;


class GUI : public QWidget
{
private:
    Service &service;
    QListWidget* tapeListWidget;
    QLineEdit* titleLineEdit, *filmedAtLineEdit, *creationDateLineEdit, *accessCountLineEdit, *footagePreviewLineEdit;
    QPushButton* addButton, *deleteButton, *updateButton;

public:
    GUI(Service &service);

private:
    void initializeGUI();
    void populateList();
    void connectSignalsAndSlots();

    int getSelectedIndex() const;
    void addTapeGUI();
    void removeTapeGUI();
    void updateTapeGUI();
};

