/*
Month Lookupi
Read a month number 1–12 and print the month's 
name and its number of days — February needs the year to handle leaps.
*/

#include <stdio.h>
int main()
{
    int n=0;
    // printf("Enter month number(1-12): ");
    // scanf("%d", &n);

    for(int i=1; i<=12; i++)
    {
        if(i==2)
        {
            printf("%d = 28 days\n", i);
            continue;
        }

        if(i%2==1)
        {
            printf("%d = 31 days\n", i);
        }
        else
        {
            printf("%d = 30 days\n", i);
        }
    }
    return 0;   
}
