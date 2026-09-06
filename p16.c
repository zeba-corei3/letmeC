/*Password Gate
Ask for a password, allowing up to 3 attempts: 
print "Access granted" on success or "Account locked" after 
the third failure. Variant: retry forever until correct.
*/
#include <string.h>
#include <stdio.h>

int main()
{
    int n=0, cnt=0;
    char p[20];

    for(int i=0; i<3; i++)
    {
        printf("Enter password: ");
        scanf("%s", p);
        printf("Entered: %s\n", p);

        if(strcmp(p, "abc") == 0)
        {
            printf("Correct pw\n");
            return 0;
            // break;
        }
        else
        {
            printf("Wrong pw\n");
        }
    }
    printf("Three attempts done. GOod Bye.\n");
    return -1;
}
