#ifndef BACKEND_H
#define BACKEND_H

#include <member.h>

class backend
{
    public:
        backend();
        bool initDB();
        bool createTables();
        bool resetDB(); //Drop all tables
        bool add(member);
        bool update(member);
        bool remove(member);
        member findMemberByID(unsigned int);
        member findMemberByName(string, string);
};

#endif // BACKEND_H
