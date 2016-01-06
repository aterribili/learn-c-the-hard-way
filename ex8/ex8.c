#include<stdio.h>

char full_name[] = {'Z', 'e', 'd', ' ', 'a', ' ', 'S', 'h', 'a', 'w', '\0'}; 
int main(int argc, char *argv[]) {
	int areas[] = {10,12,13,14,15};
	char name[] = "Zed";
//	char xablau[] = {};
//	char xablaus[] = {'a', 'o'}; 
//	printf("%s.\n", xablau);
//	printf("%ld.\n", sizeof(xablau));
//	printf("%s.\n", xablaus); 
//	int x = 150;
//	printf("The size of \"x\" is %d.\n", x);
	printf("areas[0] before modified has value %d.\n", areas[0]);
	areas[0] = 100;
	printf("name[0] before modified has value %c.\n", name[0]);
	printf("name before modified has value %c.\n", name[0]);
	name[0] = 'M';
	printf("name[0] modified is %c.\n", name[0]);
	printf("name modified is %s.\n", name);
	
	printf("areas[0] modified is %d.\n", areas[0]);
	printf("The size of an int: %ld\n", sizeof(int));
	printf("The size of areas (int[]): %ld\n", sizeof(areas));
	printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
	printf("The first area is %d, the 2nd %d.\n", areas[0], areas[1]);
	printf("The size of a char: %ld.\n", sizeof(char));
	printf("The size of name (char[]): %ld.\n", sizeof(name));
	printf("The size of chars: %ld.\n", sizeof(full_name) / sizeof(char));
	printf("The number of chars: %ld.\n", sizeof(name) / sizeof(char));
	printf("The size of full_name (char[]): %ld.\n", sizeof(full_name));
	printf("The number of chars: %ld.\n", sizeof(full_name) / sizeof(char));
//	prinft("%c", name[0]);
	printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);
	printf("index out of bounds for areas %d.\n", areas[10]);
	printf("index out of bounds for full name %c.\n", full_name[10]);
	printf("index out of bounds for name %c.\n", name[10]);

	return 0;
}
