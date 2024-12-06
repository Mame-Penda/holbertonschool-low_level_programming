#include "main.h"
#include <string.h>
/**
 * create_file - create a file and writes a string
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write
 *
 * Return: 1 on success, -1 on failure
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fw;
	size_t lenght = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, permissions);
	if (fd == -1)
		return (-1);
	if (text_content)
		lenght = strlen(text_content);

	if (lenght > 0)
	{
		fw = write(fd, text_content, lenght);
		if (fw == -1 || (size_t)fw != lenght)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

