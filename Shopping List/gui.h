
#include <QWidget>
#include "service.h"
#include "QMessageBox"

namespace Ui { class gui; }

class gui : public QWidget
{
    Q_OBJECT

public:
    gui(service& serv, QWidget *parent = nullptr);

    void populateList();
    void connectSignalsAndSlots();
    void removeTapeGUI();
    int getSelectedIndex() const;
    void populateFilter();

    ~gui();

private:
    Ui::gui *ui;
    service& serv;
};
