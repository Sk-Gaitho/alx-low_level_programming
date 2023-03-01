#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int diag, so;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (diag = 1; diag <= n; diag++)
		{
			for (so = 1; so < diag; so++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
