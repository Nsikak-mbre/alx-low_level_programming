#include "main.h"
/**
 *  *  * _isalpha - checks for alphanumeric character
 *   *   * @c: the character
 *    *    * Return: 1 if the character is lowercase, 0 if not
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
