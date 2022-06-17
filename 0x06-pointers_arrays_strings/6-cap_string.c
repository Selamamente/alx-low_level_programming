#include "main.h"

/**
* cap_string - prints function that capitalizes all words
* @c: parameter with string
* Return: return the capital stirng
*/
char *cap_string(char *c)
{

char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
int length = 13;
int a = 0, i;

	while (c[a])
	{

	i = 0;
		while (i < length)
		{
		if ((a == 0 || c[a - 1] == spc[i]) && (c[a] >= 97 && c[a] <= 122))
			c[a] = c[a] - 32;
		i++;
		}
		a++;
	}
	return (c);
}
