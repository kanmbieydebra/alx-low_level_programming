#include <stdio.h>

/**
  *main- print base 10 single digit numbers starting from 0
  *
  *Return: 0 if success
  */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
