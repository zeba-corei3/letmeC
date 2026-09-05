/*Primes to a Million
Print all primes below 1,000,000. Start with trial division, then try a sieve — measure the difference.*/

#include <stdio.h>

int main()
{
    int n=10;
    int cnt=0;

    for(int i=1; i<=n; i++)
    {
        if(n%2==0)
        {
            continue;
        }
        else{
            for(int j=1; j<=n; j++){
            if(i%j==0)
            {
                cnt += 1;
            }}
            if(cnt > 2)
            {
                continue;
            }
            else{
                printf("%d\n", n);
            }
        }
    }
}