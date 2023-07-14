#include <stdio.h>

/**
  * main - prints the lowercase alphabet in reverse.
  * Return: if 0 (Success)
  */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
