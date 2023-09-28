#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Determines the endianness of the system and prints the result.
 *
 * Return: 0 on success
 */
int main(void)
{
	int endianness;

	endianness = get_endianness();

	if (endianness != 0)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}

	return (0);
}
