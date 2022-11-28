//power.c

#include <stdio.h>
#include "power.h"

void powerRule1(int n, int m)
{
	printf("%d\n", n);

	return;
}

void powerRule2(int a, int b, int c)
{
	int powOf2 = a*2;
	printf("%dx + %d\n", powOf2, b);

	return;
}

void powerRule3(int u, int v, int w, int s)
{
	int powOf3 = u*3;
	int powOf2 = v*2;
	printf("%dx^2 + %dx + %d\n", powOf3, powOf2, w);
	
	return;
}

void powerRule4(int e, int f, int g, int h, int i)
{
	int powOf4 = e*4;
	int powOf3 = f*3;
	int powOf2 = g*2;
	printf("%dx^3 + %dx^2 + %dx + %d\n", powOf4, powOf3, powOf2, h);

	return;
}

