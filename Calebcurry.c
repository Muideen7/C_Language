#include <stdio.h>

#define WIDTH 5
#define LENGTH 10
#define NEWLINE '\n'

// Variable declaration
extern int a, b;
extern int c;
extern float f;

int main()
{
	/* Variable definition */

	int a, b;
	int c;
	float f;
	int area;

	/* actual intialization */
	a = 10;
	b = 20;
	area = WIDTH * LENGTH;

	printf("Value of area: %d", area);
	printf("%c", NEWLINE);

	c = a + b;
	printf("Value of c: %d \n", c);

	f = 70.0/3.0;
	printf("Value of f: %f \n", f);

	printf("Hello\tWorld\n");

	return(0);

}
