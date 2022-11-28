#include <stdio.h>

#include "pascal.h"
#include "mmath.h"

void pascal(int row){

	for(int i = 0; i <= row; i++){

		printf("%ld ", nchoosek(row, i));
	}

	printf("\n");

}

