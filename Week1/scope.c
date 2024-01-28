#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	int inscope = 12;
	{
		printf("Inscope is %d", inscope);
		int notinscope = 7;
		printf("Not in scope is %d", notinscope); 
	}
	printf("In scope is %d", inscope);
}

