#include "bb_db_frontend.h"
#include "ui_bb_db_frontend.h"

bb_db_frontend::bb_db_frontend(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::bb_db_frontend)
{
    ui->setupUi(this);
}

bb_db_frontend::~bb_db_frontend()
{
    delete ui;
}

void bb_db_frontend::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
