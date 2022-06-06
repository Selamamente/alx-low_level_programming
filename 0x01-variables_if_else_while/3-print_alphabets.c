#include <stdio.h>
/**
* main - print alphabet in lowwer case and then in upper case
* Descripition: alphABET
* Return: return 0 (success)
*/

int main(void)
{
int ch;

for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
for (ch = 65; ch <= 90; ch++)
{
putchar(ch);
}

putchar(10);
return (0);
}
