#include "main.h"

/**
* print_last_digit - prints the last digit of a numer.
* @c: digit to find the last place of.
* Return: The last digit.
*/
int print_last_digit(int c)
{
	if (c < 0)
		c = c * -1;
	_putchar((c % 10) + '0');
	return (c % 10);
}
