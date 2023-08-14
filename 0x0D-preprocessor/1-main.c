#include "1-pi.h"
#include "1-pi.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Calculates and prints the area of a circle with a given radius
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	float a;
	float r;

	r = 98;
	a = PI * r * r;
	printf("%.3f\n", a);

	return (0);
}
