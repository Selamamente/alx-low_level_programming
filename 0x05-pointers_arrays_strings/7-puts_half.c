#include "main.h"
#include <string.h>

/**
* puts_half - prints a function that prints half of a string
* @str: a string parameter
*
*/
void puts_half(char *str)
{

int n, i, j;
n = strlen(str);
if (n % 2 == 1)
	i = n / 2 + 1;
else
	i = n / 2;
for (j = i; j < n; j++)
	_putchar(str[i]);
_putchar(str[i]);

}
