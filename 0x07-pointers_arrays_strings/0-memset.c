#include "main.h"
#include <string.h>

/**
* _memset - fills memory with a constant byte
* @s: char to check
* @b: char to check
* @n: unsigned int to check
*
* Return: to char
*/
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
