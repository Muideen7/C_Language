#include <stdio.h>

int main()
{

	const int LENGTH = 15;
	const int WIDTH = 8;
	const char NEWLINE = '\n';
	int area;

	area = LENGTH * WIDTH;
	printf("Value of area: %d", area);
	printf("%c", NEWLINE);

	return 0;
}
