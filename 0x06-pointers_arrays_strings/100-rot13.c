#include "main.h"

/**
 * rot13 - rot13 encoding
 * @s: pointer to a string to be encoded
 * Description: a function that encodes a string using rot13.
 * - You can only use if statement once in your code
 * - You can only use two loops in your code
 * - You are not allowed to use switch
 * - You are not allowed to use any ternary operation
 * Return: s, pointer to encoded string
 */
char *rot13(char *s)
{
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char r[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = r[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
