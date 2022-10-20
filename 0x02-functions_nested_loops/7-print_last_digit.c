#include "main.h"

/**
  *print_last_didit- last digit value
  *@n: interger value
  * Return: 0
  */
int print_last_digit(int n)
{
	if ((n % 10) < 0)
	_putchar((n % 10) + '0');
	return (n % 10);
}
