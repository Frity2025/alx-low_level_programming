#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer
 * @jack_bauer:time
 * Description: using the main function
 * this program  prints every minute of the day of Jack Bauer
 * Return: nothing
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
