#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: the matrix
 * @size: the size of the matrix
 * Return: prints the sum of the two diagonals of a
 * square matrix of integers
 */

void print_diagsums(int *a, int size)
{

	int i, sum = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum, sum1);
}
