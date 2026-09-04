/*
GCD & LCM
Compute the GCD of two numbers (Euclid's remainder 
method encouraged) and derive the LCM from it.
*/


#include <stdio.h>

int lcm(int a, int b, int gcd)
{
    int lcm = (a*b)/gcd;
    return lcm;
}


int gcd(int a, int b)
{
    if(b!=0)
    {
        int rem = a%b;
        gcd(b, rem);
    }
    else
    {
        return a;
    }
}

int main()
{
    int a=0, b=0, g=0;

    printf("Enter a :: ");
    scanf("%d", &a);
    printf("Enter b :: ");
    scanf("%d", &b);

    g = gcd(a, b);
    int l = lcm(a, b, g);

    printf("GCD(%d, %d) = %d\nLCM(%d, %d) = %d\n", a, b, g, a, b, l);

    return 0;

}
*/
