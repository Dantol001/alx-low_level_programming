#include <stdio.h>

/**
 *main- Entry point.
 *Return: 0 no error, non-0 if error
 **/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
