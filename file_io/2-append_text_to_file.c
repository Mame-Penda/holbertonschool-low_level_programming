#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends text at the end of file
 * @filename: name of the file
 * @text_content: NULL-terminated string
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fw;
	size_t length = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content)
		return (-1);

	if (text_content)
		length = strlen(text_content);
	if (length > 0)
	{
		fw = write(fd, text_content, length);
		if (fw == -1 || (size_t)fw != length)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
