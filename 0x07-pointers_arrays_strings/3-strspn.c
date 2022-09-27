#include "main.h"
#include <string.h>

/**
* _strspn - get the length of a prefix substring
* @accept: pointer to get the bytes
* @s: pointer to string char type
*
* Return: number of bytes in s which are from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int len = strspn(s, accept);

	return (len);
}
