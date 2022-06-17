#include "main.h"
#include <string.h>

/**
* _strcmp - prints a function that compares two strings
* @s1: parameter1
* @s2: parameter2
* Return: return the result with the integer value
*
*/

int _strcmp(char *s1, char *s2)
{
int compared_value;

	compared_value = strcmp(s1, s2);
	return (compared_value);
}
