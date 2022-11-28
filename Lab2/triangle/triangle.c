// triangle.c

#include <stdio.h>
#include "triangle.h"
#include <math.h>
#include <stdlib.h>

void results(double a, double b, double c, double x, double y)
{
	printf("\nopposite = %.2f\nadjacent = %.2f\nhypotenuse = %.2f\nx = %.2f\ny = %.2f\n\n", a, b, c, x, y);
}

//Using pythagorean theorem

double findOppositePyth(double b, double c, double x, double y)
{
	double a = sqrt(pow(c, 2) - pow(b, 2));

	results(a, b, c, x, y);

	return a;
}

double findAdjacentPyth(double a, double c, double x, double y)
{
	double b = sqrt(pow(c, 2) - pow(a, 2));

	results(a, b, c, x, y);

	return b;
}

double findHypotenusePyth(double a, double b, double x, double y)
{
	double c = sqrt(pow(a, 2) + pow(b, 2));

	results(a, b, c, x, y);

	return c;
}

//Now using trignometry.

double findOppositeTrig(double b, double c, double x, double y)
{
	double a = sin(x) * c;

	results(a, b, c, x, y);

	return a;
}

double findAdjacentTrig(double a, double c, double x, double y)
{
	double b = cos(x) * c;

	results(a, b, c, x, y);

	return b;
}

double findHypotenuseTrig(double a, double b, double x, double y)
{
	double c = a / sin(x);

	results(a, b, c, x, y);

	return c;
}

//Done!!
