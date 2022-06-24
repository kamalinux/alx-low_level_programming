#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - copies the string including the null byte to the buffer
 *@src: points to a string
 *@dest: points to the buffer
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
