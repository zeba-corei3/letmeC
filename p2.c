/*
Guard the Input
See what your language does when non-numeric text is entered 
where a number is expected. Then handle it: detect the bad input 
and re-prompt until a valid number arrives.
*/

#include <stdio.h>
#include <ctype.h>
int main()
{
    /*
    PROTOTYPE:

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Got: %d\n", n);

    return 0;
    
    */

    int n=0;
    int isNum = 1;
    while(isNum!=0)
    {
        printf("Enter a number:\n");
        scanf("%d", &n);
        
        if(isdigit(n))
        {
            printf("Got: %d\n", n);
            isNum=0;
        }
        else
        {
            printf("Not a number. Try again\n");
        }
        // if(n>0 && n<100)
        // {
        //     printf("Got: %d\n", n);
        //     isNum=0;
        // }
        // else{
        //     printf("Not a number. Try again\n");
        // }

    }
}