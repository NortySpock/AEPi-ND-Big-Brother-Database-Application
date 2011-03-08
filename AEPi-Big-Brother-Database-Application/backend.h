#ifndef BACKEND_H
#define BACKEND_H

class backend
{
    public:
        backend();
        initDB();
        createTables();
        resetDB(); //Drop all tables
        add(member);
        update(member);
        remove(member);
        findMemberByID(unsigned int);
        findMemberByName(string, string);
};

#endif // BACKEND_H
