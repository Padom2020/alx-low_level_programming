#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string to be added to
 * @src: string to be added
 *
 * Description: a function that concatenates two strings.
 * Return: a pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i))
		i++;
	while (*(src + j))
		*(dest + i++) = *(src + j++);
	return (dest);
}
