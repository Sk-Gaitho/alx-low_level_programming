#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: input number of times to print '_'
 * Return: a straight line
 */
void print_line(int n)
{
	int ln;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ln = 1; ln <= n; ln++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
