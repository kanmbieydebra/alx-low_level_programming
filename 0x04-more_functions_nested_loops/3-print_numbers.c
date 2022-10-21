#include "main.h"

/**
  *print_numbers- numbers to be printed
  *
  *Return: 0
  */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		_putchar((n % 10) + '0');
	_putchar('\n');
}
