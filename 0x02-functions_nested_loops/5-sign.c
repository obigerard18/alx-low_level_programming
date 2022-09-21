#include "main.h"

/**
* print_sign - Determines whether an integer is positive, negative.
* @c: the number to be checked.
* Return: 1 if positive, 0 if zero, -1 if negative, / if not a digit.
*/
int print_sign(int c)
{
	int j;

	if (c > 0)
	{
		_putchar('+');
		j = 1;
	}
	else if (c == 0)
	{
		_putchar('0');
		j = 0;
	}
	else if (c < 0)
	{
		_putchar('-');
		j = -1;
	}
	else
	{
		_putchar('-');
		j = '/';
	}
	return (j);
}
