////////////////////////////////////////////////////////////////////////////////

#ifndef _DIVIDE_COMMAND_H_
#define _DIVIDE_COMMAND_H_

#include "Binary_Op_Command.h"

/**
*   @class div_Command_P
*   A type of Binary_Op_Command that divides two numbers.
*
*	Command Pattern
*/
class div_Command_P : public Binary_Op_Command {

public:
	// Default constructor.
	div_Command_P(void);

	/**
	*   Initializing constructor
	*   @param: priority          for implementating order-of-operations
	*/
	div_Command_P(int);

	/**
	*   Divides two integers
	*   @param: first                first-hand operand
	*   @param: second               second-hand operand
	*   @return: result              calculated integer
	*   @exception: overflow_error      denominator is zero
	*/
	int get_val(int, int);
};

#endif
