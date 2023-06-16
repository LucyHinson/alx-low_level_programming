#include <stdio.h>
/**
 * main - A program that generates the assembly code
 * Return: 0 (`Success)
 */
int main(void)
{
	printf("size of char: %d byte(s)", sizeof(char));
	printf("size of int: %d byte(s)", sizeof(int));
	printf("size of a long int: %d byte(s)", sizeof(long int));
	printf("size of a long long int: %d  byte(s)", sizeof(long long int));
	printf("size of a float: %d byte(s)", sizeof(float));
	return (0);
