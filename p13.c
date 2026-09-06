/*
Amicable Pair
Check whether two numbers are amicable: 
each equals the sum of the other's proper divisors (220 and 284).

THe factors of the number, other than itself, summed is equal to the 
other mumber, where the same thing holds for the factors of the other one and their sum
*/

#include <stdio.h>

int main()
{
    int n1=0, n2=0;
    int sum1=0, sum2=0;

    printf("Enter n1 :: ");
    scanf("%d", &n1);

    printf("Enter n2 :: ");
    scanf("%d", &n2);

    for(int i=1; i<n1; i++)
    {
        if(n1%i==0)
        {sum1 += i;}

        if(n2 % i == 0)
        {
            sum2 += i;
        }
    }
    printf("Sum 1 = %d\tSum 2 = %d\n", sum1, sum2);

    if(sum1 == n2 && sum2 == n1)
    {
        printf("The numbers are amicable.\n");
    }
    else
    {
        printf("The numbers are NOT amicable.\n");

    }

    return 0;
}

