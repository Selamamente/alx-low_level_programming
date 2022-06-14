#include "main.h"
#include <string.h>

/**
* puts2 - prints every other char of a string, starting with the first char
* @str: a parameter with sring data type
*
*
*/
void puts2(char *str)
{
int len, i;
len = strlen(str);
for (i = 0; i < len; i += 2)
	_putchar(str[i]);
_putchar('\n');

}
