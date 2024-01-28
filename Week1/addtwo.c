#include <stdio.h>
#include <stdlib.h>
#define TWO 2;


int main(int argc, char **argv){
	if( argc != 2){
		printf("Hehehe twat\n");
		return 1;
	}
	int addition = atoi(argv[1]) + TWO;
	printf("%d\n", addition);
	return 0;
}
