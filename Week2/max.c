#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	if (argc != 3){
		printf("twat\n");
		return 1;
	}
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	
	int max = (x > y) ? x : y;
	printf("%d\n",max);
	return 0;
}
