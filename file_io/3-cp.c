#include "main.h"
#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point, copies the content of one file to another
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, exits with error codes on failure
 */
int main(int argc, char *argv[])
{
    int file_from, file_to, r_bytes, w_bytes, c1, c2;
    char buffer[1024];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (file_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close(file_from);
        exit(99);
    }

    while ((r_bytes = read(file_from, buffer, 1024)) > 0)
    {
        w_bytes = write(file_to, buffer, r_bytes);
        if (w_bytes == -1 || w_bytes != r_bytes)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close(file_from);
            close(file_to);
            exit(99);
        }
    }

    if (r_bytes == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        close(file_from);
        close(file_to);
        exit(98);
    }

    c1 = close(file_from);
    if (c1 == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
        exit(100);
    }

    c2 = close(file_to);
    if (c2 == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
        exit(100);
    }

    return (0);
}
