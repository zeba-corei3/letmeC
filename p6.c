/*
Running Totals
Read n and compute, in separate loops: 
the sum 1..n, the sum of the odd numbers up to n, 
and the sum of squares 1² + 2² + … + n².
*/

#include <stdio.h>
int main()
{
    int normal_sum=0, odd_sum=0, sq_sum=0;

    int n=0;
    
    printf("Enter numver: ");
    scanf("%d", &n);

    normal_sum = (n*(n+1))/2;
    for(int i=1; i<=n; i++)
    {
        if(i%2==1)
        {
            odd_sum += i;
        }

    }

    for(int i=1; i<=n; i++)
    {
        sq_sum += i*i;
    }

    printf("Normal Sum = %d\nodd Sum = %d\nSquare Sum = %d\n", normal_sum, odd_sum, sq_sum);
    return 0;
}