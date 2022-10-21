#include "main.h"

/**
  *print_line- draw a straight line in the terminal
  *@n: number of times to be printed
  *
  *Return: 0
  */
void print_line(int n)
{
	int l

	if (n > 0)
	{
		for (l = 0; l < n; l++)
			_putchar('_');
	}
	_putchar('\n');
}
