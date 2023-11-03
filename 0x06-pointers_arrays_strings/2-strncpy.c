#include "main.h"
/**
 * _strncpy - a function that copies a string
 * at n bytes of src are copied
 * if length of src < n, additional null bytes are written to dest
 * ensure that a total of n bytes are written
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes to be used
 * Return: pointer to dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int byte_count;

	for (byte_count = 0; byte_count < n && src[byte_count] != '\0'; byte_count++)
		dest[byte_count] = src[byte_count];

	for (; byte_count < n; byte_count++)
			dest[byte_count] = '\0';
	
	return (dest);
}
