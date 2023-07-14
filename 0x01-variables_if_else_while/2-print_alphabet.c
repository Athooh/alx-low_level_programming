#include <stdio.h>

/**
  * main - prints the alphabet.
  * Return: if 0 (Success)
  */
int main(void)
{
	char alph[26];

	alph = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
