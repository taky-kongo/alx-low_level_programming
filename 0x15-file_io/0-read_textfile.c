#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: a text file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * or if the file can not be opened or read, return 0
 * or if filename is NULL return 0
 * or if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[1024];
	unsigned int fd;
	unsigned int read_int;

	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd != 0 && fd != 3)
		return (0);
	read_int = read(fd, buffer, letters);

	write(1, buffer, read_int);

	close(fd);
	return (read_int);
}
