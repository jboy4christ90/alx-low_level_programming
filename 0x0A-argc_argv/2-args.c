#include <stdio.h>

/**
 * main - Print recieving arguments
 * @argc: argument
 * @argv: array
 * Return: 0
 */
int main(int agrc, char *argv[])
{
	int s;
	
	for (s = 0; s < argc; s++)
	{
		printf("%s\n", argv[s]);
	}

	return (0);
}
