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
 * argstostr - concatenates all the arguments
 * @ac: # of arguments
 * @av: arguments
 *
 * Return: concatenated string.
 */
char *argstostr(int ac, char **av)
{
	char *nstr;
	int istr, idx, jdx, len;

	if (!ac || !av)
		return (NULL);

	for (idx = 0, len = 0; idx < ac; idx++)
		len += _strlen(av[idx]) + 1;

	nstr = malloc((len + 1) * sizeof(char));
	if (nstr == NULL)
		return (NULL);

	for (istr = 0, idx = 0; idx < ac; idx++)
	{
		for (jdx = 0; av[idx][jdx]; jdx++, istr++)
			nstr[istr] = av[idx][jdx];
		nstr[istr++] = '\n';
	}
	nstr[istr] = '\0';
	return (nstr);
}
