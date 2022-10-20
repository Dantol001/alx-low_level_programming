#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times
 * Return: no return.
 */

void more_numbers(void)
{
	int n, a;

	for (a = 0; a <= 9; a++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
