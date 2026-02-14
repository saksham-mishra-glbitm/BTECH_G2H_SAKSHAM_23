#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void main()
{
    int a=0,b=0;
    printf("Enter two numbers: \n");
    scanf("%d %d",&a, &b);
    printf("\nFirst number = %d", a);
    printf("\nSecond number = %d\n", b);

    if(a==b)
        printf("\nThe entered numbers are equal.");
    else
        printf("\nThe entered numbers are NOT equal.");
}