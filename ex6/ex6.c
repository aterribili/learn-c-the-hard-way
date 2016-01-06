#include<stdio.h>

int main(int argc, char* argv[]) {
	int distance = 200;
	float power = 2.354f;
	double super_power = 56789.4532;
	char initial = 'A';
	char first_name[] = "Abner";
	char last_name[] = "Terribili";
	int hexa = 0xC;
	int octa = 0123;

	printf("%.d\n", distance);
	printf("%f\n", power);
	printf("%f\n", super_power);
	printf("%c\n", initial);
	printf("%s\n", first_name);
	printf("%s\n", last_name);
	printf("Meu nome é %s e sobre nome é %s, a letra inicial do meu nome é %c\n", first_name, last_name, initial);
	printf("%.1f\n", super_power);
	printf("%d\n", hexa);
	printf("%d\n", octa);
	printf("");
}
