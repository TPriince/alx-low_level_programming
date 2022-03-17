#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 */
void more_numbers(void)
{
	int i;
	int a;

	a = 0;

	while (a < 10)
	{
		for (i = 0; 1 < 15; i++)
		{
			_putchar(i + '0');
			_putchar('\n');
		}
		a++;
	}
	_putchar('\n');
}
