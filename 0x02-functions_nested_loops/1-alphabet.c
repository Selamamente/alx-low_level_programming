#include "main.h"

/**
* main - prints the alphabet, in lowercase, followed by a new line
* Description: the alphabet game
*/

void print_alphabet(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
	_putchar(i);
}
_putchar('\n');
}
