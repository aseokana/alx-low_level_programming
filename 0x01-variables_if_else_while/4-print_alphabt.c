#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the alphabets without e an q
 * Return: 0
 */
int main(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if(l != 'e' && l != 'q'){
			putchar(l);
		}
	}
	putchar('\n');
	return (0);
}
