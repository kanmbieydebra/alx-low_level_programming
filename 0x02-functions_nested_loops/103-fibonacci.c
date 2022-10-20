#include <stdio.h>

/**
  *main- prints even numbered sum of fibonacci numbers < 4000000
  *
  *Return: 0
  */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, sum;
	float s;

	while (1)
	{
		sum = f1 + f2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			s += sum;
		f1 = f2;
		f2 = sum;
	}
	printf("%lu\n", s);
	return (0);
}
