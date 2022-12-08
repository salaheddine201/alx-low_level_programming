#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ccharacter;
	int iinteger;
	long llong;
	long long llonglong;
	float ffloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(ccharacter));
	printf("Size of an int: %lu byte(s)\n", sizeof(iinteger));
	printf("Size of a long int: %lu byte(s)\n", sizeof(llong));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(llonglong));
	printf("Size of a float: %lu byte(s)\n", sizeof(ffloat));

	return (0);
}
