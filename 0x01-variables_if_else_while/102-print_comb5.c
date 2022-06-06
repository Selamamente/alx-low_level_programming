#include <stdio.h>

/**
* main - prints all possible combinations of two two-digit numbers
* Description: Software is eating the World
* Return: return 0 (success)
*/


int main(void)
{

int n;
int i;
for (n = 0; n < 100; n++)
{
for (i = 0; i < 100; i++)
{
if (n < i)
{
putchar((n / 10) + 48);
putchar((n % 10) + 48);
putchar(' ');
putchar((i / 10) + 48);
putchar((i % 10) + 48);
if (n != 98 || i != 99)
{
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');
return (0);
}
