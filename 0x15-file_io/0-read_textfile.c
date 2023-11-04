#include "main.h"
/**
 * read_textfile - Reads a text file and prints it
 * @filename: The name of the file to read.
 * @letters: The number of bytes it should read.
 *
 * Return: The actual number of letters it could read and print,
 * or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[READ_BUF_SIZE * 8];
	ssize_t bytes;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fd);
	return (bytes);
}

