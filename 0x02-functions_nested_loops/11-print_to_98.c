#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 * Description: a function that prints all natural numbers from n to 98.
 * @n: The input to be checked.
 * Return: a list of numbers from the input to 98.
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while(n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
	else
	{
		while(n >98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
}
