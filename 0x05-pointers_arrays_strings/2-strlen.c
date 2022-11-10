#include "main.h"

/**
  * _strlen - returns lemgth of the string.
  * @str: string to be read.
  *
  * Return: length of str
  */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
