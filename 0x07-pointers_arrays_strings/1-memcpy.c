#include "main.h"
#include <string.h>

/**
* _memcpy - copies memory area
* @dest: char to check
* @src: char to check
* @n: unsigned int to check
*
* Return: char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
