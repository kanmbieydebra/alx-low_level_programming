#include <stdio.h>

/**
  *main- lowercase and uppercase alphabet
  *
  *Return: 0 if success
  */
int main(void)
{
	char c;
	char d;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (d = 'A'; d <= 'Z'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
