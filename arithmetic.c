#include <stdio.h>

int main()
{
	int a = 21;
	int b = 10;
	int c;

	c = a + b;
	printf("vale of c is: %d\n", c);

	c = a - b;
	printf("value of c is: %d\n", c);

	c = a * b;
	printf("value of c is: %d\n", c);

	c = a % b;
	printf("value of c is: %d\n", c);

	c = a / b;
	printf("value of c is: %d\n", c);

	c = a++;
	printf("value of c is: %d\n", c);

	c = b--;
	printf("value of c is: %d\n", c);
}
