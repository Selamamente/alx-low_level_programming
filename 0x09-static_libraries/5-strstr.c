#include "main.h"

/**
* _strstr - prints a function that locates a substring
* @haystack: the string to search
* @needle: the string to find
* Return: return the character
*
*/

char *_strstr(char *haystack, char *needle)
{
int i = 0, j;

while (haystack[i])
{
	j = 0;
	while (needle[j])
	{
	if (haystack[i + j] != needle[j])
	{
	break;
	}
	j++;
	}
	if (needle[j] == '\0')
	{
	return (haystack + i);
	}
	i++;
}
return ('\0');
}
