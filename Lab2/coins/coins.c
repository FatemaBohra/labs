// coins.c

#include <stdio.h>
#include "coins.h"

void calculateCoins(int num)
{


	int d = num/100;
	printf("%d dollars, ", d);
	num = num%100;

	int q = num/25;
	printf("%d quarters, ", q);
	num = num%25;

	int di = num/10;
	printf("%d dimes, ", di);
	num = num%10;

	int n = num/5;
	printf("%d nickels, ", n);
	num = num%5;

	int p = num/1;
	printf("%d pennies\n", p);

	return;
}

