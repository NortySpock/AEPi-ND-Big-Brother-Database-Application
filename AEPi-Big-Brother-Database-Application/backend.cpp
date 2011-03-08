#include "backend.h"

backend::backend()
{
}

bool backend::initDB()
{
    bool success;

    try
    {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    /* Other database connection and initialization stuff */

        success = TRUE;
    }
    catch(Exception & e)
    {
        //handling
        success = FALSE;
    }

    return success;
}

bool createTables()
{
    bool success;

    try
    {
        /* Create tables in database */
        success = TRUE;
    }
    catch(Exception & e)
    {
        success = FALSE;
    }

    return success;
}

bool resetDB() //Drop all tables
{
    bool success;

    try
    {
        //DROP * FROM *

        success = TRUE;
    }
    catch(Exception & e)
    {
        success = FALSE;
    }

    return success;
}

bool add(member)
{
    bool success;

    try
    {
        /*
        INSERT INTO TABLE
            VALUES ();
        */
    }
    catch(Exception & e)
    {
        success = FALSE;
    }

    return success;
}

bool update(member)
{
    bool success;

    try
    {
        /*
        UPDATE TABLE
        SET COLUMN=VALUE
            WHERE ID = member.ID();
        */
    }
    catch(Exception & e)
    {
        success = FALSE;
    }

    return success;
}

bool remove(member)
{
    bool success;

    try
    {
        /*
        DELETE FROM TABLE
            WHERE ID = member.ID();
        */
    }
    catch(Exception & e)
    {
        success = FALSE;
    }

    return success;
}

member findMemberByID(unsigned int requestedID)
{
    int foundCount = /*
        SELECT COUNT (*) FROM NAME
            WHERE ID = requestedID;
        */

    //We find one record
    if(foundCount == 1)
    {
        unsigned int foundID = requestedID;
        string foundFirstName = /* SELECT FNAME FROM NAME WHERE ID = foundID */;
        string foundMiddleNames = /* SELECT MNAMES FROM NAME WHERE ID = foundID */;
        string foundLastName = /* SELECT LNAME FROM NAME WHERE ID = foundID */;
        string foundPCsemester = /* SELECT PCSEMESTER FROM PC WHERE ID = foundID */;
        string foundPCyear = /* SELECT PCYEAR FROM PC WHERE ID = foundID */;
        int found BBID = /* SELECT BBID FROM BBID WHERE ID = foundID */;

        member foundMember(foundID, foundFirstName,foundMiddleNames, foundLastName, foundPCsemester, foundPCyear, foundBBID);
    }
    else
    {
        if(foundCount < 1)
        {
            throw Exception(MEMBER_NOT_FOUND, "The requested Member ID was not found.");
        }
        else // foundCount > 1
        {
            throw Exception(MEMBER_NOT_FOUND, "A unique Member ID was not found.");
            /* Now that I think about this, this should never be the case, since this is the Primary Key for the database.
             * Needless to say, if this actually happens, your database has SERIOUS problems.
             * However, a good programmer looks both ways before crossing a one way street. (Doug Linder)
             */
        }
    }

    return foundMember;
}

member findMemberByName(string, string)
{
    int foundCount = /*
        SELECT COUNT (*) FROM NAME
            WHERE NAME.LNAME = requestedLNAME AND NAME.FNAME = requestedFNAME
                OR WHERE NAME.LNAME = requestedLNAME;
        */

    //We find one record
    if(foundCount == 1)
    {
        unsigned int foundID = /* SELECT NAME.ID FROM NAME
                                    WHERE NAME.LNAME = requestedLNAME AND NAME.FNAME = requestedFNAME
                                        OR WHERE NAME.LNAME = requestedLNAME; */
        string foundFirstName = /* SELECT FNAME FROM NAME WHERE ID = foundID */;
        string foundMiddleNames = /* SELECT MNAMES FROM NAME WHERE ID = foundID */;
        string foundLastName = /* SELECT LNAME FROM NAME WHERE ID = foundID */;
        string foundPCsemester = /* SELECT PCSEMESTER FROM PC WHERE ID = foundID */;
        string foundPCyear = /* SELECT PCYEAR FROM PC WHERE ID = foundID */;
        int found BBID = /* SELECT BBID FROM BBID WHERE ID = foundID */;

        member foundMember(foundID, foundFirstName,foundMiddleNames, foundLastName, foundPCsemester, foundPCyear, foundBBID);
    }
    else
    {
        if(foundCount < 1)
        {
            throw Exception(MEMBER_NOT_FOUND, "The requested Member ID was not found.");
        }
        else // foundCount > 1
        {
            throw Exception(MEMBER_NOT_FOUND, "A unique Member ID was not found.");
        }
    }

    return foundMember;
}
