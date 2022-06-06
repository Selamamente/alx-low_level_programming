#include <stdio.h>

/**
* main - prints all possible combinations of single-digit numbers
* Description: an unbeatable combination for success
* Return: return 0 (success)
*/

int main(void)
{


int n;
for (n = 48; n <= 57; n++)
{
putchar(n);
if (n != 57)
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
