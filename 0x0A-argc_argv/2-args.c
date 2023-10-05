#include <stdio.h>
/**
* main - Entry Point
* @argc: number of arguments
* @argv: vector of strings of arguments
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int a;
	(void)argc;
	(void)argv;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
