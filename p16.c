/*Password Gate
Ask for a password, allowing up to 3 attempts: 
print "Access granted" on success or "Account locked" after 
the third failure. Variant: retry forever until correct.
*/

#include <stdio.h>

int main()
{
    int n=0, cnt=0;
    char p[20];

    for(int i=0; i<3; i++)
    {
        printf("Enter password: ");
        scanf("%s", &p);

        // if()
    }
}