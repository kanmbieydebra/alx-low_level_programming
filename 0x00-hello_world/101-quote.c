#include <stdio.h>
#include <unistd.h>
/**
  *main-print a string without prinf and put functions
  *Return:1 if success.
  */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}