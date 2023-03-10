#include <stdio.h>
/**
 * main - prints thenumber of arguments 
 * @argc: the number of command line arguments
 * @argv: an array of strings containing in n argument
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
