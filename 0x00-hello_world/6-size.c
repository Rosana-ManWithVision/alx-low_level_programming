#include <stdio.h>
/**
 * main - A program that print various sizes of various types
 * main(void) - Return nothinig
 * Return 0 - (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(a));
	printf("Size of an int: %lu byte(s)\n", sizeof(b));
	printf("Size of long long int: %lld byte(s)\n", sizeof(d));
	printf("Size of long int: %ld byte(s)\n", sizeof(c));
	printf("Size of float  int: %f byte(s)\n", sizeof(f));
	return (0); /* Returns nothing*/
}
