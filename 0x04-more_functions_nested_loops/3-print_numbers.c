#include "main.h"

/**
* print_numbers - Print numbers from 0 - 9
* @void: No parameter
*/
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
