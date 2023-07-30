#include "main.h"
/**
 *  *  * jack_bauer - prints each second
 *   *    * Return: return the seconds
 *    *
 **/

void printJackBauerSchedule(void)
{
for (int hour = 0; hour < 24; hour++)
{
for (int minute = 0; minute < 60; minute++)
{
printf("%02d:%02d\n", hour, minute);
}
}
}
