#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]){
	if (argc != 2){
		printf("Twat\n");
		return 1;
	}

	int max = 256;
	char text[max];
	
	// max = (strlen(input) < max) ? strlen(input) : max;
	strncpy(text, argv[1], max);
	
	printf("The input string was: %s\n", text);

	int a_count;
	int b_count;
	int e_count;

	for (int i = 0; i < strlen(text); i++){
		char character = text[i];
		
		switch(character){
			case 'a': 
				a_count++;
				break;
			case 'b':
				b_count++;
				break;
			case 'e':
				e_count++;
				break;
			default:
				break;
		}
	}
	
	printf("\'a\' count: %d\n", a_count);
	printf("\'b\' count: %d\n", b_count);
	printf("\'e\' count: %d\n", e_count);
	printf("Total count: %d\n", (a_count + b_count + e_count));

	return 0;
}
