#include <stdio.h>

/**
 * main- Entry point
 * Description: prints the alphabet in lowercase
 * Return: 0 if no error, non-0 if error
 **/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
