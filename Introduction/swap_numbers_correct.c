#include <stdio.h>

void swap(int *num1, int *num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void main()
{
	int a = 7;
	int b = 15;
	
	printf("The numbers before the swap are %d and %d\n", a, b);
	swap(&a, &b);
	printf("The numbers after the swap are %d and %d\n", a, b);
}
