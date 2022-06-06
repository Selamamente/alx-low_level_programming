#include <stdio.h>

/**
* main - print the alphabet in lower case
* Description: alphabet game
* Return: return 0 (success)
*/

int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
