#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, or exits with codes 97-100 on error
 */
int main(int argc, char *argv[])
{
	int fd_source, fd_dest;
	char buffer[1024];
	ssize_t bytesread;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
	fd_source = open(argv[1], O_RDONLY);
	if (fd_source == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	fd_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_dest == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
	}
	while ((bytesread = read(fd_source, buffer, 1024)) > 0)
	if (write(fd_dest, buffer, bytesread) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
	}
	if (bytesread == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
	exit(98);
	}
	if (close(fd_source) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_source);
	exit(100);
	}
	if (close(fd_dest) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
	exit(100);
	}
	return (0);
}

