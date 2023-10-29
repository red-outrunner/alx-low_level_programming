#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - Calculate the length of a string
 * @s: Pointer to the string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;
	if (s != NULL)
	{
		while (s[len] != '\0')
		{
			len++;
		}
	}
	return (len);
}
