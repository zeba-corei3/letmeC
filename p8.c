/*
44	Fibonaccii
Print the first n terms of the Fibonacci series, keeping only the last two values as you go.

45	Factorial
Compute n! with a loop. Find the largest n your integer type can handle before overflowing.
*/
#include <stdio.h>

int factorial(int num)
{
    int fact=1;
    for(int i=1; i<=num; i++)
    {
        fact *= i;
    }

    return fact;

}

//takes a value 'n' and calculates the fibonacci sequence value of that index.
int fibonacci(int n)
{
    int f0=0, f1=1;
    int i=2;
    int f2=0;
    while(i<=n)
    {
        f2 = f0 + f1;
        printf("f2 = %d\ti=%d\n", f2, i);
        f0=f1;
        f1=f2;
        i++;
    }
    return f2;
}

int main()
{
    int n=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int res = fibonacci(n);
    printf("The fibonacci number of index %d is %d\n",n, res);

    int res2 = factorial(n);
    printf(" %d! is %d\n",n, res2);

    return 0;
}