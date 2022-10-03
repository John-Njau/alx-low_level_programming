#include <stdio.h>

/**
 * main - function prints all arguments followed by a new line
 *
 * @argc: argument count
 * @argv: argument vector array
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
