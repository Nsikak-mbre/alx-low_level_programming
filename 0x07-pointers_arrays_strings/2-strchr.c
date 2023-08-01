#include "main.h"
#include <stdlib.h>

/**
 *  *  * _strchr - select part of string after char
 *   *   * @s: string to check
 *    *    * @c: character to look for
 *     *     *
 *      *      * Return: s at comparison is success, NULL is char not found
 **/

char *_strchr(char *s, char c)
{
do {
if (*s == c)
{
return (s);
}
s++;
} while (*s != '\0');
return (NULL);
}
}
