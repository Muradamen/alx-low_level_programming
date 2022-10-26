#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen - counts and reutns string length
 * @s: the input string
 *
 * Return: the length
 */
int _strlen(char *s)
{
	int c = 0;

	for (c = 0; *s; c++)
		s++;

	return (c);
}

/**
 * _strdup - malloc new str and copy *str into it
 * @str: the string
 *
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	char *nstr;
	unsigned int idx, sl;

	if (!str)
		return (NULL);

	sl = _strlen(str);
	nstr = malloc(sl * sizeof(char) + 1);
	if (!nstr)
		return (NULL);

	for (idx = 0; idx < sl; idx++)
		nstr[idx] = str[idx];

	nstr[idx] = '\0';
	return (nstr);
}
