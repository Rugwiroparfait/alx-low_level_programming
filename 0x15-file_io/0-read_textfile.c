#include "main.h"

/* Function prototypes */
int open_file(const char *filename, char **buffer, size_t letters);
ssize_t write_to_stdout(char *buffer, ssize_t bytes);
void cleanup(int fd, char *buffer);

/**
 * read_textfile - Reads text file and prints it to POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 *         0 if the file cannot be opened or read, or if filename is NULL.
 *         0 if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_bytes;

	char *buffer;

	if (filename == NULL)
	return (0);

	fd = open_file(filename, &buffer, letters);
	if (fd == -1)
	return (0);

	read_bytes = read(fd, buffer, letters);
	if (read_bytes == -1 || write_to_stdout(buffer, read_bytes) == -1)
	read_bytes = 0;

	cleanup(fd, buffer);

	return (read_bytes);
}


/**
 * open_file - Opens a file and allocates memory for a buffer.
 * @filename: The name of the file to open.
 * @buffer: A pointer to the buffer.
 * @letters: The number of letters to read and print.
 *
 * Return: The file descriptor on success, -1 on failure.
 */
int open_file(const char *filename, char **buffer, size_t letters)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);

	*buffer = malloc(sizeof(char) * letters);
	if (*buffer == NULL)
	{
		close(fd);
		return (-1);
	}

	return (fd);
}

/**
 * write_to_stdout - Writes the buffer to the standard output.
 * @buffer: A pointer to the buffer.
 * @bytes: The number of bytes to write.
 *
 * Return: The number of bytes written on success, -1 on failure.
 */
ssize_t write_to_stdout(char *buffer, ssize_t bytes)
{
	ssize_t write_bytes = write(STDOUT_FILENO, buffer, bytes);

	if (write_bytes == -1 || write_bytes != bytes)
		return (-1);

	return (write_bytes);
}

/**
 * cleanup - Frees allocated memory and closes the file.
 * @fd: The file descriptor.
 * @buffer: A pointer to the buffer.
 */
void cleanup(int fd, char *buffer)
{
	free(buffer);
	close(fd);
}

