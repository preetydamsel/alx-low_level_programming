#include <stdio.h>
/**
 * main - A program that prints the size of various file
 * Return 0 (Success)
 */
int main(void)
{
	printf("size of a char: %zu bytes(s)\n", sizeof(char));
	printf("size of a char: %zu bytes(s)\n", sizeof(int));
	printf("size of a char: %zu bytes(s)\n", sizeof(long int));
	printf("size of a char: %zu bytes(s)\n", sizeof(long long int));
	printf("size of a char: %zu bytes(s)\n", sizeof(float));
	return (0);
}

