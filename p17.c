/*
    accept array, reverse elements in place, and display before and after
*/

#include <stdio.h>

int main()
{
    int n=0;

    printf("Enter a nubmer: ");
    scanf("%d", &n);

    int a[n];

    printf("array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Before:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    
    int i=0, j=n-1;
    while(i<j)
    {
        int temp=a[i];
        a[i] = a[j];
        a[j] = temp;

        i++;
        j--;
    }
    
    printf("After:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    return 0;
}