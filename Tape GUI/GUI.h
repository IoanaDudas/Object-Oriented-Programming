#include "Service.h"
#include <QWidget>
#include <QMessageBox>
#include <qshortcut>
#include "mylistGUI.h"

QT_BEGIN_NAMESPACE
namespace Ui { class GUI; }
QT_END_NAMESPACE

class GUI : public QWidget
{
    Q_OBJECT

public:
    GUI(Service& service, QWidget *parent = nullptr);

    void populateList();
    void connectSignalsAndSlots();
    void populateMyList();
    void populateFilter(vector<TElem> filteredVector);

    int getSelectedIndex() const;
    void addTapeGUI();
    void removeTapeGUI();
    void updateTapeGUI();
    void saveTapeGUI();
    void nextTapeGUI();
    void filterTapesGUI();
    void openFile();
    void modeA();
    void modeB();
    void undo();
    void redo();
    void openWidget();

    ~GUI();

private:
    Ui::GUI *ui;
    Service& service;
    string mode;
    mylistGUI* mylistGui;
};
