#include <stdio.h>
#include <unistd.h>
/**
  *main - program prints a string without using printf or puts function
  *Return: 0 signifies Success
  */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

