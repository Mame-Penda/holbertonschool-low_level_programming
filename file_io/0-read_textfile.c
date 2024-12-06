#include "main.h"
/**
 * read_textfile - a function that reads a text file and prints
 * @filename: the filename to open
 * @letters: the number of letters to read and print
 * Return: the number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t len_r = 0, len_w = 0;
char *temp;

if (!filename || !letters)
return (0);

temp = malloc(sizeof(letters));
if (!temp)
return (0);

fd = open(filename, O_RDONLY);

if (fd == -1)
{
free(temp);
return (0);
}

len_r = read(fd, temp, letters);
if (len_r == -1)
{
	free(temp);
	close(fd);
	return (0);
}
len_w = write(STDOUT_FILENO, temp, len_r);
if (len_w == -1 || len_w != len_r)
{
	free(temp);
	close(fd);
	return (0);
}
free(temp);
close(fd);
return (len_w);
}
