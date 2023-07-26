#include "main.h"
/**
 *  *  * _isdigit - checks for lowercase character
 *   *   * @c: the character
 *    *    * Return: 1 if the character is lowercase, 0 if not
 **/
int _isdigit(int c)
{
return ((c >= 'a' && c <= 'z') ? 0 : 1);
}
