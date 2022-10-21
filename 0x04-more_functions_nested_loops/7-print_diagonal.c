#include "main.h"

/**
  *print_diagonal- draw diagonal lines in the terminal
  *@n: number of times to be printed
  */
void print_diagonal(int n)
{
	int d, s;

	if (n > 0)
	{
		for (d = 0; d < n; d++)
		{
			for (s = 0; s < d; s++)
				_putchar(' ');
			_putchar('\\');

			if (d == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
