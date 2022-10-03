#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Argument count
 * @argv: Argument vector
 * Return: int
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
		exit(EXIT_SUCCESS);
}
