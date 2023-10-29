#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Description:
 *   This program multiplies two numbers. If the program does not receive two
 *   arguments, it prints "Error" and returns 1.
 *
 * Return: 0 upon successful completion, 1 if an error occurs.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]); /* Convert the first number to an integer */
	num2 = atoi(argv[2]); /* Convert the second number to an integer */

	result = num1 * num2; /* Perform multiplication */

	printf("%d\n", result); /* Print the result */

	return (0);
}
