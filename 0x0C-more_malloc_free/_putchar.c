#include <unistd.h>
#include "main.h"

/**
  *_putchar - prints characters
  *@c: The character to print
  *
  *Return: 0
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
