#include <stdio.h>

/**
* main - prints all possible different combinations of two digits
* Description: Inventing is a combination of brains and materials
* Return:return 0(success)
*/

int main(void)
{
int i;
int n;

for (i = 48; i <= 57; i++)
{

for (n = 49; n <= 57; n++)
{
if (n > i)
{
putchar(i);
putchar(n);
if (i != 56 || n != 57)
{
putchar(44);
putchar(32);
}
}
}
}

putchar(10);
return (0);
}
