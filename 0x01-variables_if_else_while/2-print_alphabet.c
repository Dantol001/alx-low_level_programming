#include <stdio.h>

/**
 *main- Entry point.
 *Return: 0 if no error, non-0 if error.
 **/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
