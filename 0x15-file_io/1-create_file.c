#include "main.h"

/**
 * create_file - Createsfile with specific permission s& write content to it.
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_status, close_status;
	mode_t mode = S_IRUSR | S_IWUSR; /* rw------- */

	if (filename == NULL)
		return (-1);

	/* Open file for writing, create if not exists, truncate if exists */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		/* Write content to the file */
		write_status = write(fd, text_content, _strlen(text_content));
		if (write_status == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/* Close the file */
	close_status = close(fd);
	if (close_status == -1)
		return (-1);

	return (1);
}

/**
 * _strlen - Returns the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
size_t _strlen(char *s)
{
	size_t len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

