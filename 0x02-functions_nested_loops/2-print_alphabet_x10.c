#include "main.h"

/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercas
* Description:10 x alphabet
*/

void print_alphabet_x10(void)
{

int i, j;

for (j = 0; j < 10; j++)
{

for (i = 'a'; j <= 'z'; i++)
{

_putchar(i);
}
_putchar('\n');
}

}
