#include "main.h"

/**
* _isalpha - prints a function checks for alphabetic character
* @c: charcter in  isalpha
* Return: Returns 1 if c is a letter, lowercase or uppercase Returns 0
*
*/

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
