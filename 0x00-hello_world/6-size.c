#include <stdio.h>
/**
 *main - A program printing the size of various computer types
 *Return: 0 (Success)
 */
int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long));
	printf("size of a float: %lu byet(s)\n", sizeof(float));
	return (0);
}
