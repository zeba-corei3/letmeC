/*
Min, Max & Average of a Stream
Read n, then read n numbers one at a time and 
report their minimum, maximum, and average without storing them all.
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    int size=0, n=0;
    int max = INT_MAX;
    int min=INT_MIN;

    printf("Enter number: \n");
    scanf("%d", &size);

    for(int i=0; i<size; i++)
    {
        printf("Enter number: \n");
        scanf("%d", &n);

        if(n < min)
        {
            min = n;
        }
        if(n>max)
        {
            max = n;
        }
    }

    printf("Minimum = %d\nMaximum=%d\n", min, max);

    return 0;

}