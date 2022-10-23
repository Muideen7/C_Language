#include <stdio.h>

int main()
{
	int a = 20;
	int b = 10;
	int c;

	if( a == b )
	{
		printf("a is equals to b\n");
	}
	else
	{
		printf("a is not equal to b\n");
	}
	if ( a < b )
	{
		printf("a is less than b\n");
	}
	else
	{
		printf("a is not less than b\n");
	}
	if( a > b)
	{
		printf(" a is greater than b\n");
	}
	else
	{
		printf("a is not greater than b\n");
	}

	/*let's change the value of a and b */
	a = 5;
	b = 20;
	
	if( a <= b)
	{
		printf("a is either less than or equals to b\n");
	}
	if( b >= a )
	{
		printf("b is either greater than or equals to a\n");
	}
	if( a && b )
	{
		printf("since neither a nor b are non zero: the value is true\n");
	}
	if( a || b )
	{
		printf("since either a or b is non zero: the value is true\n");
	}
	if(! (a && b ) )
	{
		printf("since neither a nor b are non zero: reverse the value to false\n");
	}

}
