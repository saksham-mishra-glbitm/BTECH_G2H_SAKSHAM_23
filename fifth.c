#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void main()
{
    int a=0,b=0;
    printf("Enter two integer values: \n");
    scanf("%d %d", &a, &b);
    printf("\nBefore swapping:- \n");
    printf("First value = %d\n", a);
    printf("Second value = %d\n", b);

    int t=a;
    a=b;
    b=t;

    printf("\nAfter swapping:- \n");
    printf("First value = %d\n", a);
    printf("Second value = %d\n", b);
    
    
}