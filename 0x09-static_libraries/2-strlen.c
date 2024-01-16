#include "main.h"


/**
 *  *  * _strlen - checks for string length
 *   *   * @s: the argument
 *    *    * Return: 0
 */
int _strlen(char *s)
{
int size = 0;
while (*s)
{
size++;
s++;
}
return (size);
}


