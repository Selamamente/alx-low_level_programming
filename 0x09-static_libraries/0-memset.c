#include "main.h"
#include <string.h>

/**
* _memset - prints a function that fills memory with a constant byte
* @s: string
* @b: a character
* @n: an integer
* Return: a string
*
*/

char *_memset(char *s, char b, unsigned int n)
{

unsigned int i;
for (i = 0; i < n; i++)
	s[i] = b;
return (s);
}
