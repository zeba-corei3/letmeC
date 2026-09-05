/*
Harmonic Sum
Compute 1 + 1/2 + 1/3 + … + 1/n. 
Watch what happens if the division is done with integers.
*/

/*
harmonic mean converges very slow to a a limit
gradual growth followed by slowing down

*/

#include <stdio.h>

void harmonic_floating(int n)
{
    float hmf = 0.0;

    for(float i=1; i<=(float)n; i++)
    {
        hmf = hmf + 1.0/i;
    }
    printf("Harmonic Mean with floating point variables = %f\n", hmf);
}

int main()
{
    int n = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int hm = 0;

    for(int i=1; i<=n; i++)
    {
        hm = hm + 1/i;
    }
    printf("Harmonic Mean with integer variables = %d\n", hm);

    printf("___________________________\n\n");

    for(int j=0; j<=100; j++)
    {
        printf("J = %d\n", j);
        harmonic_floating(j);
    }
    return 0;
}