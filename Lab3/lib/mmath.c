#include "mmath.h"
#include <math.h>
#include <stdbool.h>
#include <stdio.h>

long fact(int num){

	long k = 1;
	int value = 1;

	while(value <= num){
		k = k * value;
		value = value + 1;
	}
	return k;

}

long nchoosek(int n, int k){

	//breaking down the formula
	long formula1 = fact(n);

	long formula2 = formula1/fact(k);

	long formula3 = formula2/fact(n-k);

	return formula3;
}

bool prime(long number){
	if(number == 1){
		return false;
	}

	for(int i = 2; i < number; i++){
		if(number % i == 0)
			return false;
	}
	return true;
}


// DONE!!!

