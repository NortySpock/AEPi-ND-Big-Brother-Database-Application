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

private slots:
    void on_submitMemberBigBrotherButton_clicked();
    void on_findMemberBigBrotherButton_clicked();
    void on_submitMemberMemberButton_clicked();
    void on_confirmDBButton_clicked();
    void on_findMemberMemberButton_clicked();
    //void on_pushButton_clicked();
};

#endif // BB_DB_FRONTEND_H
