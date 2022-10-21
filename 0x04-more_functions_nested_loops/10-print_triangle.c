#include "main.h"

/**
  *print_triangle- print a triangle using # character
  *@size: triangle size
  */
void print_triangle(int size)
{
	int h, b;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (b = size - h; b > 0; b--)
				_putchar(' ');

			for (b = 0; b < h; b++)
				_putchar('#');

			if (h == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
