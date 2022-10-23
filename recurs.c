// Online C compiler to run C program online
#include <stdio.h>

int factorial(unsigned int i) {
    if(i <= 1)
    {
        return 1;
    }
    return i * factorial(i - 1);
}

int fibonnaci(int m) {
    if(m == 0)
    {
        return(0);
    }
    if(m == 1)
    {
        return(1);
    }
    return fibonnaci(m - 1) + (m - 2);
}
int main()
{
    int m;
    for(m = 0; m < 10; m++)
    {
        printf("%d\t\n", fibonnaci(m));
    }
    
    int i = 12;
    printf("factorial of %d is: %d\n", i, factorial(i));
    return(0);
}
