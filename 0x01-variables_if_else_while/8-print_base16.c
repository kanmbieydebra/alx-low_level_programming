#include <stdio.h>

/**
  *main- base 16 lowercase
  *
  *Return: 0 if success
  */
int main(void)
{
	int num;
	char c;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + 0);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
