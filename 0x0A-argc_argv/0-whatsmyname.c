#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Description:
 *   This program prints its name followed by a new line.
 *   If you rename the program, it will still print the new name without
 *   having to recompile it.
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
