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
int len;

while (*s != '\0')
{
len += 1;
*s = *s + 1;
}
return (len);
}
