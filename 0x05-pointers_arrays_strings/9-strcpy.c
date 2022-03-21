/**
 * *_strcpy - copies string pointed to by src to buffer pointed to by dest
 * @dest: the pointer to a string
 * @src: the pointer to a buffer
 * Return: the value of the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != 0)
		i++;

	for (j = 0; j <= i; j++)
		dest[j] = src[j];

	return (dest);
}
