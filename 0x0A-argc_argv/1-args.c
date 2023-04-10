#include <stdio.h>
#include "main.h"

/**
 * main - prints the arguments passed
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
