#include "main.h"
#include <ctype.h>

/**
* _isalpha -  tests whether a character is from the English alphabet.
* @c: Function parameter
*
* Return: 0 or 1
*/
int _isalpha(int c)
{
	if (isalpha(c) || islower(c) || isupper(c))
		return (1);
	else
		return (0);
}
