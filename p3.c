/*
    Grade the Marks
    Read marks for five subjects and compute the percentage. 
    Print 
        (a) Pass/Fail, 
        (b) a grade from an A–F ladder, and 
        (c) read a grade character and 
        print remarks for it using multi-way selection
*/

#include <stdio.h>
int main()
{
    int marks[5];

    for(int i=0; i<5; i++)
    {
        printf("Enter Subject %d marks: ", i+1);
        scanf("%d", &marks[i]);
    }

    float avg = (marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5.0;

    printf("The percentage = %.2f\n", avg*100);

    if(avg >= 35.0)
    {
        
    }
}