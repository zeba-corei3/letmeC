/*
Quadratic Roots
Find the roots of ax² + bx + c = 0 from coefficients a, b, c. 
Use the discriminant to distinguish two real roots, 
a repeated root, and 
complex roots — and don't forget a = 0.
*/

#include <stdio.h>
#include <math.h>
#include <complex.h>

int main()
{
    int a=0, b=0, c=0;

    printf("Enter coefficients a, b, c:\n");
    scanf("%d%d%d", &a, &b, &c);

    if(a == 0)
    {
        printf("Coefficient a cannot be zero\n");
        return -1;
    }
    else{
        float d = (pow(b, 2)) - (4*a*c);

        float root1 = ((-1)*b + sqrt(d))/(2*a);
        float root2 = ((-1)*b - sqrt(d))/(2*a);

        if(d==0)
        {
            printf("Roots are repeated.\n\tr1 = %.1f  r2 = %.1f\n", root1, root2);
        }
        else if(d>0)
        {
            printf("Roots are unique.\n\tr1 = %.1f  r2 = %.1f\n", root1, root2);
        }
        else
        {
            complex croot1 = ((-1)*b + csqrt(d))/(2*a);
            complex croot2 = ((-1)*b - csqrt(d))/(2*a);
            printf("Roots are complex.\n\tr1 = %.1f + %.1fi  r2 = %.1f + %.1fi\n", creal(croot1), cimag(croot1), creal(croot2), cimag(croot2));
        }
        
    }
    return 0;
}

/*
output:

./letmeC/problems/p1.out

Enter coefficients a, b, c:
1 4 5
Roots are complex.
        r1 = -2.0 + 1.0i  r2 = -2.0 + -1.0i
*/