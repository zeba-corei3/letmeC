/*
Reverse a Number
Reverse a number's digits arithmetically (e.g. 1234 → 4321) — no string conversion.

Numeric Palindrome
Check whether a number reads the same reversed, reusing the digit-reversal idea.
*/

#include <stdio.h>
//#include <math.h>
int palindrome(int n, int rev)
{
    if(n==rev)
    {
        printf("Is a palindrome\n");
        return 1;
    }
    else
    {
        printf("Is not a palindrome\n");
        return 0;
    }
}

int reverse(int n)
{
    int rev=0, temp=n;
    
    // for(int i=0;;i++)
    // {
    //     if(temp > 0)
    //     {
    //         int rem = temp%10;
    //         rev += pow(10, i)*rem;
    //         temp = temp/10;
    //     }
    //     else{
    //         break;
    //     }
    // }

    for(int i=0;temp>0;i++)
    {
        int rem = temp % 10;
        rev = rev*10 + rem;
        temp = temp/10;
    }

    printf("Reversed number: %d\n", rev);
    palindrome(n, rev);
    return rev;
}

int main()
{
    int n;

    printf("enter a number: ");
    scanf("%d", &n);
    if(n<0)
    {
        reverse(-1*n);
    }
    else
    {
        reverse(n);
    }
    return 0;
}
