#include "main.h"

/**
* _strspn - prints a function that gets the length of a prefix
* @s: parameter with string
* @accept: parameter with char
* Return: number of bytes in the init segment
*
*/

unsigned int _strspn(char *s, char *accept)
{

unsigned int i = 0, j, k = 0;
while (accept[i])
{
j = 0;
while (s[j] != 32)
{
if (accept[i] == s[j])
{
k++;
}
j++;
}
i++;
}
return (k);
}
