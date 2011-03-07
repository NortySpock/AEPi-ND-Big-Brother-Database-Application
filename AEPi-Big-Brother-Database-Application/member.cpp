#include "member.h"

//You can only create complete members with the constructor
member::member(unsigned int setID, string setFirstName, string setMiddleNames, string setLastName, string setPCsemester, string setPCyear, int setBBID)
{
  m_ID = setID;
  m_firstName = setFirstName;
  m_middleNames = setMiddleName;
  m_lastName = setLastName;
  m_PCsemester = setPCsemester;
  m_PCyear = setPCyear;
  m_BBID = setBBID;
}

int member::ID()
{
  return m_ID;
}

string member::firstName()
{
  return m_firstName();
}

string member::middleNames()
{
  return m_middleNames();
}

string member::lastName()
{
  return m_lastName;
}

SemesterEnum member::PCsemester()
{
  return m_PCsemester;
}

string member::PCsemesterToString()
{
  string temp;
  
  switch m_PCsemester
  {
    case FALL:
      temp = "Fall";
      break;
    
    case SPRING:
      temp = "Spring";
      break;
    
    default:
      temp = "NULL";
  }
  
  return temp;
}

short member::PCyear()
{
  return m_PCyear;
}

int member::BBID()
{
  return m_BBID;
}
