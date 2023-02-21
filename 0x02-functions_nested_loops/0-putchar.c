#include "main.h"
/**
 * main - Entry point
 * Description: prints _putchar
 * Return: 0
 */
int main(void)
{
	char str[] = "_putchar";
	int index;

	for(index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
	return (0);
}
