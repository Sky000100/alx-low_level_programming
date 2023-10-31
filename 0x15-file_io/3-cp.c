#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024

/**
 * error_and_exit - Print an error message and exit with the given status code.
 * @status: The exit status code.
 * @fmt: The format string for the error message.
 */
void error_and_exit(int status, const char *fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	dprintf(2, fmt, args);
	va_end(args);
	exit(status);
}

int main(int argc, char *argv[])
{
	char *file_from = argv[1];
        char *file_to = argv[2];
        int fd_from;
        int fd_to;
        ssize_t bytes_read;
        ssize_t bytes_written;
        char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		error_and_exit(97, "Usage: cp file_from file_to\n");
	}

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		error_and_exit(98, "Error: Can't read from file %s\n", file_from);
	}

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		error_and_exit(99, "Error: Can't write to file %s\n", file_to);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			error_and_exit(99, "Error: Can't write to file %s\n", file_to);
		}
	}

	if (bytes_read == -1)
	{
		error_and_exit(98, "Error: Can't read from file %s\n", file_from);
	}

	if (close(fd_from) == -1)
	{
		error_and_exit(100, "Error: Can't close fd %d\n", fd_from);
	}

	if (close(fd_to) == -1)
	{
		error_and_exit(100, "Error: Can't close fd %d\n", fd_to);
	}

	return (0);
}

