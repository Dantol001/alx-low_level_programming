#include <stdio.h>
/**
 *main- Entry point.
 *Return: 0 if no error, non-0 if error.
**/
int main(void)
{
	int i;
	char hexvalues[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexvalues[i]);
	}
	putchar('\n');
	return (0);
}
