#include <stdio.h>
/**
 * main - A program printing the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %ld byte(s)\n", (unsigned)sizeof(char));
	printf("size of an int: %ld byte(s)\n", (unsigned)sizeof(int));
	printf("size of a long int: %ld byte(s)\n", (unsigned)sizeof(long int));
	printf("size of a long long int: %ld byte(s)\n", (unsigned)sizeof(long long int));
	printf("size of a float: %ld byte(s)\n", (unsigned)sizeof(float));
	return (0);
}
