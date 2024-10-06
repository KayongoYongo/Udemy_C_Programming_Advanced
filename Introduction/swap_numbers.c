#include <stdio.h>

void main()
{
	int a = 5;
	int b = 7;
	int temp;

	printf("Before swapping: a = %d, b = %d\n", a, b);

	temp = a;
	a = b;
	b = temp;
	
	printf("After swapping: a = %d, b = %d\n", a, b);
}
