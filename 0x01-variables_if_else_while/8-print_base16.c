#include <stdio.h>

/**
* main - prints all the numbers in base 16 in lowwer case
* Description: Hexadecimal
* Return: return 0 (success)
*/

int main(void)
{
int n;
int i;

for (n = 48; n <= 57; n++)
{
putchar(n);
}

for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}

putchar(10);
return (0);
}
