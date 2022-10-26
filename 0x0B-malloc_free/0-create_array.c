#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a char.
 * @size: the size of the array
 * @c: the char to initialize with
 *
 * Return: char *
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int idx;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		str[idx] = c;

	return (str);
}
