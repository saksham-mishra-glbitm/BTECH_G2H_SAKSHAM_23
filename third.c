#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void main()
{
    double rad=0.0;
    printf("Enter the radius of the circle: \n");
    scanf("%lf", &rad);
    double area = M_PI * rad * rad;
    double circum = 2 * M_PI * rad;

    printf("Area = %0.5lf\n", area);
    printf("Circumference = %0.5lf\n", circum);
}