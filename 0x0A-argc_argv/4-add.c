#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Checks if a string represents a positive number
 * @str: The input string to check
 *
 * Return: 1 if the string is a positive number, 0 otherwise
 */
int is_positive_number(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/**
 * main - Multiplies two numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Description:
 * This program adds two numbers. If no number is passed to the program
 * Print 0, followed by newline
 * If one number contains symbols, that are not digits, "Error" and returns 1.
 * Assume that all numbers to be added are integers
 *
 * Return: 0 upon successful completion, 1 if an error occurs.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc ; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}


