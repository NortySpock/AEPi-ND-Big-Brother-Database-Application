#ifndef BB_DB_FRONTEND_H
#define BB_DB_FRONTEND_H

#include <QWidget>

namespace Ui {
    class bb_db_frontend;
}

class bb_db_frontend : public QWidget {
    Q_OBJECT
public:
    bb_db_frontend(QWidget *parent = 0);
    ~bb_db_frontend();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::bb_db_frontend *ui;
};

#endif // BB_DB_FRONTEND_H
