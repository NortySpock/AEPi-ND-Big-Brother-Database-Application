#ifndef EXCEPTION_H
#define EXCEPTION_H

//////////////////////////////////////////////////////////////////////////////
/// @class Exception
/// @brief To handle exceptions thrown.
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
/// @fn Exception (Error_Type, string)
/// @brief Instantiates an Exception, given error code (an enum) and
/// a message string.
/// @pre No exception exists
/// @post Exception with error code and message string exists
/// @param Error Type: An error code -- must match up with error codes listed
/// in the enum.
/// @param string: A custom message string associated with the error.
/// @return None (constructor)
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
/// @fn Error_Type error_code()
/// @brief Returns the ErrorType of the exception
/// @pre Exception
/// @post Returns ErrorType
/// @param None
/// @return ErrorType (an enum)
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
/// @fn string error_message
/// @brief Returns message string associated with the exception.
/// @pre Exception
/// @post Returns string that is the error message associated
/// with the exception
/// @param None.
/// @return string (the error message)
//////////////////////////////////////////////////////////////////////////////

#include <string>
using std::string;

enum Error_Type { ID_NOT_FOUND, NAME_NOT_FOUND, DB_ERROR };

class Exception
{
  public:
    Exception (Error_Type, string);
    Error_Type error_code ();
    string error_message ();

  private:
    Error_Type m_error_code; /// < The error code (it's an enum)
    string m_error_message; /// < The string associated with the error.
};

#endif // EXCEPTION_H
