
#include <QWidget>
#include "Service.h"
#include "QMessageBox"

namespace Ui { class gui; }

class gui : public QWidget
{
    Q_OBJECT

public:
    gui(Service& service, QWidget *parent = nullptr);

    void populateList();
    void connectSignalsAndSlots();
    void calculateTotal();
    void sortList();

    ~gui();

private:
    Ui::gui *ui;
    Service& service;
};
