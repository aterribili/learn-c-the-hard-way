#include<stdio.h>

int main(int argc, char *argv[]) {
	// create two arrays we care about
	int ages[] = {23, 43, 12, 89, 2};
	char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};

	// safety get the size of ages
	int count = sizeof(ages) / sizeof(int);
	int i = 0;
	
	// first way using indexing
	for(i = count; i >= 0; i--) {
		printf("%s has %d years alive.\n", names[i], ages[i]);
	}
	
	printf("---\n");

	// setup the pointers to start the arrays
	int *cur_age = ages;
	char **cur_name = names;

	// second way using pointers 
	for(i = count; i >= 0; i--) {
		printf("%s has %d years old.\n", *(cur_name+i), *(cur_age+i));
	}
	
	printf("---\n");

	for(i = count; i >= 0; i--) {
		printf("%s has %d years old again.\n", cur_name[i], cur_age[i]);
	}
	
	printf("---\n");

	// fourth way with pointers in a stupid complex way
	int new_count = count - 1;
	for(cur_name = names+new_count, cur_age = ages+new_count; cur_age == ages ;cur_name--, cur_age--) {
		printf("%s lived %d years so far.\n", *cur_name, *cur_age);	
	}
	
	return 0;
}
