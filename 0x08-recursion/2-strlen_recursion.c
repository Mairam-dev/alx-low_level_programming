#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: cadena de caracteres en puntero.
 * Return: valor.
 */

int _strlen_recursion(char *s)
{
	int t = 0;

	if (*s == '\0')
	{
		return (0);
	}
	s++;

	t = _strlen_recursion(s) + 1;

	return (t);
}
