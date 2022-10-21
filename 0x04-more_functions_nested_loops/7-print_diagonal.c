#include "main.h"

/**
  *print_diagonal- draw diagonal lines in the terminal
  *@n: number of times to be printed
  */
void print_diagonal(int n)
{
	int d;

	if (n > 0)
	{
		for (d = 0; d < n; d++)
			_putchar('\\');
	}
	_putchar('\n');
}
