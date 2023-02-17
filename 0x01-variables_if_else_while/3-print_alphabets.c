#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the alphabets
 * Return: 0
 */
int main(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}

        for (l = 'A'; l <= 'Z'; l++)
        {
                putchar(l);
        }
	putchar('\n');
	return (0);
}
