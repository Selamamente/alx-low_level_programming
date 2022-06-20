#include <unistd.h>

/**
* _putchar - prints the character c to stdout
* @c: parameter with char data type
* Return:1 for success
*
*/

int _putchar(char c)
{

return (write(1, &c, 1));
}
