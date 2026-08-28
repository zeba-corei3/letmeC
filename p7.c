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
   int max = 0;//INT_MAX;  -- nothing will be bigger than infinity 
    int min = 0;//INT_MIN; -- nothing will be smaller than - infinity

    printf("Enter number: \n");
    scanf("%d", &size);

    for(int i=0; i<size; i++)
    {
        printf("Enter number: \n");
        scanf("%d", &n);

        //to make sure only the numbers of the stream get to be compared with each other.
        if(i==0)
        {   
            min = n;
            max = n;
        }
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
