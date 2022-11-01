#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stddef.h>
#include <string.h>
/**
 * append_text_to_file - Appends to a file
 * @filename: Filename
 * @text_content: String to write to file
 * Return: 1 for success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdopen, w;

	if (filename == NULL)
		return (-1);

	fdopen = open(filename, O_RDWR | O_APPEND);

	if (fdopen == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	w = write(fdopen, text_content, strlen(text_content));
	if (w == -1)
		return (-1);
	return (1);
}
