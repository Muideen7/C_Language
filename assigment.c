#include <stdio.h>

int main()
{
	int a = 21;
	int c;
         
	c = a;
	printf("equals to example: the value of c is %d\n", c);

	c += a;
	printf("the value of c is: %d\n", c);

	c -= a;
	printf("the value of c is: %d\n", c);


	c /= a;
	printf("the value of c is: %d\n", c);

	c %= a;
	printf("the value of c is: %d\n", c);

	c *= a;
	printf("the value of c is: %d\n", c);

	c >>= 2;
	printf("the value of c is : %d\n", c);

	c <<= 2;
	printf("the value of c is: %d\n", c);

	c |= 2;
	printf("the value of c is: %d\n", c);

	c ^= 2;
	printf("the value of c is: %d\n", c);

	return (0);

}
