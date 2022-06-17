#include "main.h"

/**
* string_toupper - prints changes all lowercase letters to uppercase
* @x: a parameter
* Return: the x parameter
*
*/
char *string_toupper(char *x)
{
int i = 0;
	while (x[i])
	{
	if (x[i] >= 97 && x[i] <= 122)
		x[i] = x[i] - 32;
	i++;
	}
	return (x);
}
