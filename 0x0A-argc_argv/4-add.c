#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


/**
 * main - Program that adds two numbers
 *@argc: count of arguments
 *@argv: array of pointers to the strings passed
 * Return: Always 0, return 1 if an error
 */
int main(int argc, char *argv[])
{
	int add = 0, a, b;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[a]);
	}
	printf("%d\n", add);
	return (0);
}
