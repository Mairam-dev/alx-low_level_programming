#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src, including the terminating
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k, num;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	while (src[j] != '\0')
		j++;

	if (i < j)
		num = j;
	else if (i >= j)
		num = i;

	for (k = 0; k < num; k++)
	{
		if (num == j)
			dest[k + num - 1] = src[k];
		else
			dest[k + num] = src[k];
	}

	return (dest);
}
