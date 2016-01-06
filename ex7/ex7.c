#include<stdio.h>

int main(int argc, char *argv[]) 
{
	int bugs = 100;
	double bug_rate = 1.2;

	printf("You have %d bugs at the imaginari rate %f.\n", bugs, bug_rate);
	
	long universe_of_defects = 1L * 1024L * 1024L * 1024L;
	printf("The entire of universe has %ld bugs.\n", universe_of_defects);

	double expected_bugs = bugs * bug_rate;
	printf("You are expected to have %f bugs.\n", expected_bugs);

	double part_of_universe = expected_bugs / universe_of_defects;
	printf("That is only a %e portion of the universe.\n", part_of_universe);

	char null_byte = '\0';
	int care_percentage = bugs * null_byte;
	printf("Which means you should care %d%%.\n", care_percentage);

	printf("Xablau %e\n", null_byte * 12.3f);

//	printf("%s\n", '\0');
	printf("%c\n", '\0');
	printf("%d\n", '\0');
	printf("%d\n", 'a');
//	printf("%d\n", '\\');
//	printf("%d\n", "aaa");
//	printf("%d\n", "a");
	unsigned int x = 10;
	unsigned y = 11;

	printf("The total number is %d", x*y);

	return 0;
}
