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

//Make me a backend!
backend be;

//User picked database settings
void bb_db_frontend::on_confirmDBButton_clicked()
{
    // Wants a fresh DB
    if(emptyDBRadioButton.checked() == TRUE)
    {
        be.initDB();
        be.resetDB();
        be.createTables();
    }
    else if(mockDBRadioButton.checked() == TRUE)
    {
        be.initDB();
        be.resetDB();
        be.createTables();
        for(Iterator iter = hypotheticalMockLinkedListOfMemberObjects.begin(); iter != hypotheticalMockList.end(); iter++)
        {
            be.add(*iter);
        }
    }
    else if(csvDBRadioButton.checked() == TRUE)
    {
        be.initDB();
        be.resetDB();
        be.createTables();
        hypotheticalLinkedListOfMemberObjects = //python command to parse a particular layout of CSV stuff and give back a list.
        for(Iterator iter = hypotheticalListOfMemberObjects.begin(); iter != hypotheticalMockList.end(); iter++)
        {
            be.add(*iter);
        }
    }
    else //Use existing DB. The horror!
    {
        be.initDB();
    }
}

//User wants to find a member
void bb_db_frontend::on_findMemberMemberButton_clicked()
{
    //if IDMemberLabel has text
    //Parse text to ParsedInt
    
    //Try to find member with int
    //else try to find member with name
    //else throw dialog box saying we couldn't find member
    
    //If successful finding member, try to get big brother using their ID.
}

//User wants to update a member
void bb_db_frontend::on_submitMemberMemberButton_clicked()
{
  //Save member revised using ID
}

//User wants to find a big brother
void bb_db_frontend::on_findMemberBigBrotherButton_clicked()
{
    //if IDMemberLabel has text
    //Parse text to ParsedInt
    
    //Try to find member with int
    //else try to find member with name
    //else throw dialog box saying we couldn't find member
}

//User wants to update a big brother
void bb_db_frontend::on_submitMemberBigBrotherButton_clicked()
{
  //Save member revised using ID
}
