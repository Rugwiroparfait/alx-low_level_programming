#include <stdio.h>

/**
 * hare_and_tortoise - Prints a message before the main function is executed.
 * (Prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n)
 */
void __attribute__((constructor)) hare_and_tortoise(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

