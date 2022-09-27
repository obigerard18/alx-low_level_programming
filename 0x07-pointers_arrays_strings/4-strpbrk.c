#include "main.h"
#include <string.h>

/**
* _strpbrk - locates the first occurrence in s of any of the bytes of accept
*
* @accept: pointer to get the bytes
* @s: string
*
* Return: a pointer to s or NULL if no byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
