#include "main.h"

/**
 * *_memset - copies memory area.
 * @dest: the memory area
 * @src: the memory area
 * @n: the max bytes to use
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
