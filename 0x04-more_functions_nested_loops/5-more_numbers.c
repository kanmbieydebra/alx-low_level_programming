#include "main.h"

/**
  *more_numbers- print 10 times the number
  *
  *Return: 0
  */
void more_numbers(void)
{
	int n, count;

	for (count = 0; count <= 9; count++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
	_putchar('\n');
	}
}
