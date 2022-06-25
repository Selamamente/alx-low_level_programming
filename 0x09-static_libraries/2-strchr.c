#include "main.h"
#include <stddef.h>

/**
* _strchr - prints a function that locates a character in a string
* @s: parametr with string
* @c: parameter with charcter
* Return: string
*/

char *_strchr(char *s, char c)
{
int i;

while (1)
{
i = *s++;
if (i == c)
{
return (s - 1);
}
if (i == 0)
{
return (NULL);
}
}

}
