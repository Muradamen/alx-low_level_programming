#include "main.h"

/**
 * wordCount - counts the number of words within a string.
 * @str: the input string.
 *
 * Return: the number of words.
 */

int wordCount(char *str)
{
	int flag = 0, wc = 0;
	int idx;

	for (idx = 0; str[idx]; idx++)
		if (str[idx] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			wc++;
		}
	return (wc);
}

/**
 * wordLen - counts the number of letters of the word
 * @wd: the word.
 *
 * Return: the number of letters.
 */

int wordLen(char *wd)
{
	int idx = 0;

	while (*(wd + idx) && *(wd + idx) != ' ')
		idx++;

	return (idx);
}


/**
 * strtow - splits a string into words
 * @str: string of words to be split
 *
 * Return: double pointer to strings
 */

char **strtow(char *str)
{
	char **ptr;
	int idx = 0;
	int ldx, nw, wl, wdx;

	nw = wordCount(str);
	if (*str == '\0' || str == NULL || nw == 0)
		return (NULL);

	ptr = malloc((nw + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);

	for (wdx = 0; wdx < nw; wdx++)
	{
		while (str[idx] == ' ')
			idx++;

		wl = wordLen(str + idx);
		ptr[wdx] = malloc((wl + 1) * sizeof(char));
		if (ptr[wdx] == NULL)
		{
			while (wdx--)
				free(ptr[wdx]);
			free(ptr);
			return (NULL);
		}
		for (ldx = 0; ldx < wl; ldx++, idx++)
			ptr[wdx][ldx] = str[idx];
		ptr[wdx][ldx] = '\0';
	}
	ptr[wdx] = NULL;

	return (ptr);
}
