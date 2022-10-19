#include <stdio.h>
#include "main.h"
/**
  *print alphabet- alphabet in lowercase
  *
  *Return: 0
  */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		_putchar(alp);
	_putchar('\n');
}
