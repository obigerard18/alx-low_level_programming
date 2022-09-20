#include <ctype.h>

/**
* _isdigit - checks for digits
* @c: Function parameter
*
* Return: Return 1 or 0
*/
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
