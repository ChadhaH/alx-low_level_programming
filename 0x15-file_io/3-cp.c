#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buff(char *file);
void close_file(int o);

/**
 * create_buff - function
 * @file: the file
 * Return: pointer
 */

char *create_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - function
 * @o: the file
 */

void close_file(int o)
{
	int c;

	c = close(0);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close o %d\n", o);
		exit(100);
	}
}

/**
 * main - main function
 * @argc: numb of args
 * @argv: array of pointers
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buff(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
				{
				dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
				free(buff);
				exit(98);
				}

	w = write(to, buff, r);
	if (to == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buff);
		exit(99);
	}

	r = read(from, buff, 1024);
	to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buff);
	close_file(from);
	close_file(to);

	return (0);
}
