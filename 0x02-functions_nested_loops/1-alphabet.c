#include "main.h"

/**
* print_alphabet - print englis alphabet from a to z
*
* Return: Return nothing.
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
