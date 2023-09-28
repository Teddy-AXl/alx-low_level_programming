#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = get_bit(1024, 10);
	printf("%d\n", n);

	n = get_bit(98, 1);
	printf("%d\n", n);

	n = get_bit(1024, 0);
	printf("%d\n", n);

	return (0);
}
