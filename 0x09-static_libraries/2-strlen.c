#include "main.h"
#include <string.h>

/**
* _strlen - prints a function that returns the length of a string
* @s: pointer with string data type
* Return: returns the value/lenght of the string
*
*/

int _strlen(char *s)
{
int leng;
	for (*s = 0; *s != '\0'; s++)
	{
	leng = leng + 1;
	}
	return (leng);
}
