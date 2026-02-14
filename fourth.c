#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void main()
{
    double cent=0.0;
    printf("Enter the temperature in Centigrade: \n");
    scanf("%lf", &cent);

    printf("Temperature in Fahrenheit = %lf",(32.0 + (1.8)*cent));
}