#include<stdio.h>

void sample()
{
	printf("Hello\n");
}

int main(void)
{
	sample();
	printf("address of function main() is :%p\n", main);
	printf("address of function sample() is : %p\n", sample);
	return 0;
}

