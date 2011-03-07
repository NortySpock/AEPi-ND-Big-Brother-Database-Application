#ifndef MEMBER_H
#define MEMBER_H

#include <string>
#include <vector>


class Member
{
    public:
        enum SemesterEnum {NULL, Fall, Spring}; //There are no summer pledges

        //Getters
        unsigned int ID();
        string firstName();
        string middleNames();
        string lastName();
        SemesterEnum PCsemester();
        short m_PCyear();
        int BBID();

        string PCsemesterToString();

        bool hasBigBrother();
        bool hasPledgeClassComplete(); //both must be true
        bool hasPledgeClassSemester;
        bool hasPledgeClassYear;

        /* There are no setters for this class.

           The idea is that the backend inherits
           this as a friend class and sets everything
           on the way through.
         */

    private:
        unsigned int m_ID;
        string m_firstName;
        string m_middleNames;
        string m_lastName;
        SemesterEnum m_PCsemester;
        short m_PCyear; //If negative, indicates no year set
        int m_BBID; //If negative, indicates no Big Brother set

};

#endif // MEMBER_H
