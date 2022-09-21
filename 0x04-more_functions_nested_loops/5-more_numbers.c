#include "main.h"

/**
* more_numbers - Prints 1 to 14 * 10
* @void: Void parameter
*
* Return: No return value;
*/
void more_numbers(void)
{
		int i = 0, j;

	while (i <= 9)
	{
		j = 0;

		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
