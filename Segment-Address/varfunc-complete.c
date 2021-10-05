#include<stdio.h>

void sample()
{
	char str[] = "Hello";
	int number = 100;
	float decimal = 0.5;
	printf("address of variable str is : %p\n", &str);
	printf("address of variable number is : %p\n", &number);
        printf("address of variable decimal is : %p\n", &decimal);
}

int main(void)
{
	sample();
	printf("address of function main() is :%p\n", main);
	printf("address of function sample() is : %p\n", sample);
	return 0;
}

