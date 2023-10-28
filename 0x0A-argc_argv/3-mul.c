#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Description:
 *   This program multiplies two numbers .
 *   "Error" and returns 1.
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

	num1 = atoi(argv[1]);/*convert first number*/
	num2 = atoi(argv[2]); /*convert second number*/

	result = num1 * num2; /*perfom multiplication*/

	printf("%d\n", result); /*prints the results*/ 

	return (0);
}
