#include <stdio.h>

/**
* main - prints its name
* @argc: parameter
* @argv: an array of acommand
* Return: returns 0 for success
*
*/

int main(int argc, char *argv[])
{

int i;
	for (i = 0; i < argc; i++)
	{

	printf("%s\n", argv[i]);

	}
return (0);
}
