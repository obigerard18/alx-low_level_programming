#include <ctype.h>

/**
* _isupper - checks for uppercase
* @c: Function parameter
*
* Return: Return 1 or 0
*/
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
