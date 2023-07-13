#include <studio.h>
/**
  *main - program prints the size of c data types
  *Return: returns 0
  */
int main(void)
}
	char a;
	int b;
	long int c;
	long long int d;
	float x;

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(x));
	return (0);
}
