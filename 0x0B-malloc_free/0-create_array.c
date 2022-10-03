#include "main.h"
#include <stdlib.h>

/**
* create_array - Creates an array of char
* @size: size of memory
* @c: character
*
* Return: Returns a pointer
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	if (ptr == NULL)
		return (ptr);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
