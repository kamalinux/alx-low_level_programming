#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers
 *@argc: count of arguments
 *@argv: array of pointers to the strings passed
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
