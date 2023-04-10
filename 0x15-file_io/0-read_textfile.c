#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - read text file and print to POSIX
 * @filename: name of the the file to read
 * @letters: number of letters to read and print
 *
 * Return: number of letters read and printed, or 0 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}
	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1 || wr != rd)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (wr);
}
