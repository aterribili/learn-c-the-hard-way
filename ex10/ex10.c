#include<stdio.h>

int main(int argc, char *argv[]) {
	argv[0] = "xablau";
	for(int i = 0; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}
	

	char *states[] = {"California", "Oregon", "Washington", "Texas", NULL, NULL};
	int num_states = 4;
	states[0] = "xablau";
	
	for(int i = 0; i < num_states; i++) {
		printf("state %d: %s\n", i, states[i]);
	}
	return 0;
}
