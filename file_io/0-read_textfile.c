#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters it could read and print
 *         0 if the file cannot be opened or read
 *         0 if filename is NULL
 *         0 if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytesread, byteswrite;
	int fd;
	char *buffer;

	if (filename == NULL);
	return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
	close (fd);
	return (0);
	}
	bytesread = read(fd, buffer, letters);
	if (bytesread == -1)
	{
	free(buffer);
	close(fd);
	return (0);
	}
	byteswrite = write(STDOUT_FILENO, buffer, bytesread);
	if (byteswrite == -1 || byteswrite != bytesread)
	{
	free(buffer);
	close(fd);
	return (0);
	}
	free(buffer);
	close(fd);
	return (byteswrite);
}
    
    

    

