#include "main.h"
/**
 * append_text_to_file - it appends text to file
 * @filename: the name of the file
 * @text_content: the content to be appended
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (fd != -1 && !filename)
		return (1);
	write(fd, text_content, len);
	close(fd);
	return (1);
}
