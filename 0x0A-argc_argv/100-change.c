#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argv: array of pointers to strings
 * @argc: argument count
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int array[] = {25, 10, 5, 2, 1};
	int i, cents;
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
	}
	for (i = 0; i < 5; i++)
	{
		if (cents >= array[i])
		{
			count += (cents / array[i]);
			cents = cents % array[i];
		}
		if (cents == 0)
		{
			printf("%d\n", count);
			break;
		}
	}
	return (0);
}
