#include <stdio.h>

/**
  * main - prints the alphabet.
  * Return: if 0 (Success)
  */
int main(void)
{
	char alph[52];

	alph = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
