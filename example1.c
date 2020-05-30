#include <stdio.h>
#define MAX 5+1

int main(void) {
	char input[MAX];
  
	fgets(input, MAX, stdin);
	printf("%.*s\n", MAX, input);
  
	return 0;
}
