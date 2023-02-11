
#include "main.h"
/**
 * main - it copies the content of a file to another file
 * @argc: the number of arguments passed
 * @argv: the array of passed paramaters
 * Return: if falied it exits with a status code, if it succed it returns zero
 */
int main(int argc, char **argv)
{
	char buff[3000];
	int fdf, fdt, c1, c2, r = 0, i = 0, len = 0, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdf = open(argv[1], O_RDONLY);
	do {
		len = read(fdf, &buff[i * 1024], 1024);
		i++;
		r = r + len;
	} while (len == 1024);
	if (fdf == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdt = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	w = write(fdt, buff, r);
	if (w == -1 || fdt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	c1 = close(fdf);
	c2 = close(fdt);
	if (c1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd ");
		exit(100);
	}
	if (c2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd ");
		exit(100);
	}
	return (0);
}
