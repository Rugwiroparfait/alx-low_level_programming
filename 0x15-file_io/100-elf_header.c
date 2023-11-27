#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int fd;

	if (argc != 2)
	{
	dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
	exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
	exit(98);
	}


	close(fd);

	return (0);
}

