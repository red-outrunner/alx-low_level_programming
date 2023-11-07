#include "main.h"
/**
 * _memset -fill mempry with a constant byte.
 * @s: Pointer to the memory area.
 * @b: The constant byte.
 * @n: Number of bytes to fill
 * Return: Pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (i = 0; i < n; p++)
		s[i] = b;

	return (s);
}
