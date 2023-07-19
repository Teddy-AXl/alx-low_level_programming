#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The number to be checked
 *
 * Return: 1 for positive num, -1 for negative num, or zero for anything else
 */
int print_sign(int n)
{
	/* Check if the number is greater than zero */
	if (n > 0)
	{
		_putchar(43); /* Print positive sign */
		return (1);
	}
	/* Check if the number is less than zero */
	else if (n < 0)
	{
		_putchar(45); /* Print negative sign */
		return (-1);
	}
	else
	{
		_putchar(48); /* Print zero */
		return (0);
	}
}
