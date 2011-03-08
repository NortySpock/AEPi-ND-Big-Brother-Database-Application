#include "exception.h"

//////////////////////////////////////////////////////////////////////////////
/// @fn Exception (Error_Type _error_code, string _error_message)
/// @brief Instantiates exception with an error code (an enum) and
/// a string that contains an error message.
/// @pre None, except that the Exception class must, of course, exist
/// @post An instance of the exception class that has an error code
/// and a personal error string just for you!
/// @param Error_Type _error_code : This is the enum that represents the error
/// @param string _error_message : This is the string with the error message
/// @return None. (constructor)
//////////////////////////////////////////////////////////////////////////////
Exception::Exception (Error_Type _error_code, string _error_message)
{
    m_error_code = _error_code;
    m_error_message = _error_message;
}

//////////////////////////////////////////////////////////////////////////////
/// @fn error_code()
/// @brief This is the enum that represents the error code.
/// @pre Exception must exist
/// @post Returns the exception code of type Error_Type
/// @param None.
/// @return Returns error_code (an enum: see Error_Type)
//////////////////////////////////////////////////////////////////////////////
Error_Type Exception::error_code ()
{
    return m_error_code;
}

//////////////////////////////////////////////////////////////////////////////
/// @fn error_message()
/// @brief This is the string with the error message
/// @pre Exception must exist
/// @post Returns the message associated with the exception
/// @param None.
/// @return Returns string with error message.
//////////////////////////////////////////////////////////////////////////////
string Exception::error_message ()
{
    return m_error_message;
}
