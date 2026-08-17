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

   float avg = (marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/500.0;
    avg = avg*100.0;

    printf("The percentage = %.2f\n", avg);

    if(avg >= 35.0)
    {
        printf("Pass!\n");
        //grades if - else if ladder
    }
    else
    {
        printf("Fail :(\n");
    }
    return 0;

}

/*
./p3.out
Enter Subject 1 marks: 89
Enter Subject 2 marks: 67
Enter Subject 3 marks: 67
Enter Subject 4 marks: 98
Enter Subject 5 marks: 78
The percentage = 79.80
Pass!
*/
