/*
Reverse a Number
Reverse a number's digits arithmetically (e.g. 1234 → 4321) — no string conversion.

Numeric Palindrome
Check whether a number reads the same reversed, reusing the digit-reversal idea.
*/

#include <stdio.h>
#include <math.h>

int reverse(int n)
{
    int rev=0, temp=n;
    
    for(int i=0;;i++)
    {
        if(temp > 0)
        {
            int rem = temp%10;
            rev += pow(10, i)*rem;
            temp = temp/10;
        }
        else{
            break;
        }
    }

    printf("Reversed number: %d\n", rev);

    return rev;
}

int main()
{
    int n;

    printf("enter a number: ");
    scanf("%d", &n);

    reverse(n);

    return 0;
}