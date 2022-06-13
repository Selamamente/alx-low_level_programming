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

for (s = ""; *s != '\0'; s++)
{
len += 1;
}
return (len);
}
