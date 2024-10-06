#include <stdio.h>

void swap(int num1, int num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}

void main()
{
	int a = 5;
	int b = 9;
	printf("Before swap, num1 is %d and num2 is %d\n", a, b);
	swap(a, b);
	printf("After swap, num1 is %d and num2 is %d\n", a, b);
}
