#include "main.h"
#include <stdio.h>
/**
 * read_textfile - it reads a text file and prints it to the POSIX stdout
 * @filename: the name of the file to read from
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * if file cannot opened or file name is NULL or if write fails return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buff[5000];
	int fd, i, j;
	ssize_t length;
	mode_t mode = O_RDONLY;

	if (filename == NULL)
		return (0);
	fd = open(filename, mode);
	if (fd == -1)
		return (0);
	length = read(fd, buff, letters);
	lseek(fd, SEEK_SET, 0);
	close(fd);
	j = 0;
	for (i = 0; i < length; i++)
	{
		printf("%d\n", j);
		j = _putchar(buff[i]);
		if (j != 1)
			return (0);
	}
	return (length);
}