#include "main.h"

/**
 * jack_bauer(void) - prints every minute of the day
 */
void jack_bauer(void)
{

	for (int hour = '0'; hour < '24'; hour++)
	{
	for (int minute = '0'; minute < '60'; minute++)
	{
	_putchar(hour + minute);
	}
	}
}
