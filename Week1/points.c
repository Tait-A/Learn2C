#include <stdio.h>

int main(int argc, char **argv){
	int decimal = 3.14159268;
	float num = 3;
	float num_again = 3.14159268;
	int hmm = (int) num_again;
	printf("decimal is %d, num is %f, num_again is %f and casted to an int is %d\n", decimal, num, num_again, hmm);
	return 0;
}
