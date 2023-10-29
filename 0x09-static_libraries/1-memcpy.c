#include "main.h"

/**
 *  *  * *_memcpy - copy string  until limit is reached
 *   *   * @dest: destination string to copy into
 *    *    * @src: source string to copy from
 *     *     * @n: number of bytes to check
 *      *      *
 *       *       * Return:  string destination
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
