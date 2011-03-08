#ifndef MEMBER_H
#define MEMBER_H

#include <cstdlib>
#include <string>
using namespace std;



class member
{
    public:
        enum SemesterEnum {Null, Fall, Spring}; //There are no summer pledges

        //Constructor
        member(unsigned int, string, string, string, string, string, int);

        //Getters
        unsigned int ID();
        string firstName();
        string middleNames();
        string lastName();
        SemesterEnum PCsemester();
        short PCyear();
        int BBID();

        string PCsemesterToString();

        bool hasBigBrother();
        bool hasPledgeClassComplete(); //both must be true
        bool hasPledgeClassSemester;
        bool hasPledgeClassYear;

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
