#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, written, len;
	char *ptr = text_content;

	if (filename == NULL)
	return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	return (-1);
	if (text_content == NULL)
	{
	}
	else
	{
	len = 0;
	while (*ptr != '\0')
	{
	len++;
	ptr++;
	}
	written = write(fd, text_content, len);
	if (written == -1)
	return (-1);
	}
	if (close(fd) == -1)
	return (-1);
	return (1);
}
