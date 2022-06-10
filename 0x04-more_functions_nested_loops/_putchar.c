#include <unistd.h>

/**
* _putchar - print the character c
* @c: it is a charcter
* Return: return 1 for success and -1 for error
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
*
