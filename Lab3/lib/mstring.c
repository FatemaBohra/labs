#include <stdio.h>
#include <string.h>

#include "mstring.h"

void strrev(char* word){
	int len = strlen(word);
	int first = 0;
	int last = len - 1;

	char s;

	for(int i = 0; i <= last; i++){
		s = word[i];
		word[i] = word[last];
		word[last] = s;

		last = last - 1;
	}
}

