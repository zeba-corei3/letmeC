/*
MAHAPROGRAM
a) Electricity Bill Slabsi
Compute an electricity bill with slab pricing: 
the first 100 units at one rate, the next 100 at a higher rate, 
everything beyond at a third. Print an itemized bill.

b) Four-Function Calculatori
Read an operator (+, −, ×, ÷) and two numbers, 
and apply it. Reject unknown operators and division by zero with clear messages.
*/

#include <stdio.h>

void a_electricity(int units)
{
    /*
        first 100 @ 1.50 = 150.0
        next 100 @ 2.50 = 250.0
        over @ 4.0 = 200.0

    */

    float cost = 0;
    int tUnits = units;
    for(int i=0;tUnits > 100;i++)
    {
        // if(tUnits > 100)
        // {
            switch(i)
            {
                case 1: cost += 1.5*100.0;
                        tUnits = units -100;
                        printf("first 100 calculated.\tremaining units = %d\ncost=%.2f\n", tUnits, cost);
                        break;
                case 2: cost += 2.5*100.0;
                        tUnits = tUnits -100;
                        printf("second 100 calculated.\tremaining units = %d\ncost=%.2f\n", tUnits, cost);
                        break;
            }
        // }
        // else
        // {
            cost += 4.0 * (float)tUnits;
        // }

    }

    printf("Total Cost: %.2f\n", cost);

}

int main()
{
    a_electricity(250);
    return 0;
}
