#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: 0.
 */
int main(void)
{
	int num;
	char abc;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}

	for (abc = 'a'; abc <= 'f'; abc++)
	{
		putchar(abc);
	}

	putchar('\n');

	return (0);
}
