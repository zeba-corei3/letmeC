/*
Sum Until Sentineli
Keep reading numbers and summing until the 
user enters 0, then print the sum — with a loop that runs 
at least once. Variant: stop on any negative number instead.
*/

#include <stdio.h>

int main()
{
    int n=0, sum=0;

    
    do{
        printf("Enter numver: ");
        scanf("%d", &n);

        sum += n;
    }while(n!=0);

    printf("You entered 0\nSum = %d\n");

    return 0;
}
