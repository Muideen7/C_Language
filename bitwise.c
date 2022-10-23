#include <stdio.h>

int main()
{
	int a = 50; /* 60 = 0011 1100 */
	int b = 13; /* 13 = 0000 1101 */ 
	int c = 0;

	c = a & b; /* 12 = 0000 1100 */
	printf("the value of c is: %d\n", c);

	c = a | b; /* 61 = 0011 1101 */
	printf("the value of c is: %d\n", c);

	c = a ^ b; /* 49 = 0011 0001 */
	printf("the value of c is: %d\n", c);

	c = ~a; /* -61 = 1100 0011 */
	printf("the value of c is: %d\n", c);

	c = a << 2; /* 240 = 1111 0000 */
	printf("the vlaue of c is: %d\n", c);

	c = a >> 2; /* 15 = 0000 1111 */
	printf("the value of c is: %d\n", c);

	return (0);


}
