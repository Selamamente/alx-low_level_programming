#include <stdio.h>

/**
* main - prints alphabet in lowwer case
* Descripition: alphabet
* Return: return 0 (success)
*/

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
}

putchar(10);
return (0);
}
