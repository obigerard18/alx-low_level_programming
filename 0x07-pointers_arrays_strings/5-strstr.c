#include "main.h"
#include <string.h>

/**
* _strstr - ffind the first occurrence
* @haystack: string
* @needle: substring
*
* Return: a pointer to needle or NULL if no byte is found
*/
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
