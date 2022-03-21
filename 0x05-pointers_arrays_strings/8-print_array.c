#include <stdio.h>
#include "main.h"
/**
 * print_array - Print an array up to n.
 * @a: the array of elements
 * @n: the number of elements of the array *a.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i + 1 != n)
			printf(", ");
	}

	printf("\n");
}
