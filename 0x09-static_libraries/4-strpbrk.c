#include "main.h"

/**
* _strpbrk - prints a function searches a string for any of a set of byte
* @s: parameter with string
* @accept: accepted characters
* Return: return the first found accepted character
*
*/

char *_strpbrk(char *s, char *accept)
{
int i = 0, j;
while (s[i])
{
j = 0;
while (accept[j])
{

if (s[i] == accept[j])
{
s += i;
return (s);
}
j++;
}
i++;
}
return ('\0');
}
