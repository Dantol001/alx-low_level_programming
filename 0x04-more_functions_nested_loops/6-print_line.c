#include "main.h"

/**
 * print_line - prints straight line n times using '_'
 * @n: times straight line is printed.
 * Return: no return.
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
