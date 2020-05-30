#include <stdio.h>
#define MAX 5+1

int main(void) {

	char input[MAX];
	fgets(input, MAX, stdin);
  
	int num = 0;
	sscanf(input, "%d", &num);
	printf("%d\n",num);
	
	return 0;
}
