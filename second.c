#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void main()
{
    double p=0.0,amt=0.0,roi=0.0;
    int time=0;

    printf("Enter the principal: \n");
    scanf("%lf", &p);
    printf("Enter the amount: \n");
    scanf("%lf", &amt);
    printf("Enter the rate of interest: \n");
    scanf("%lf", &roi);
    printf("Enter time: \n");
    scanf("%d", &time);

    double si= (p*roi*time)/(100.0);
    double totamt1= si+p;

    double totamt2= p * pow((1 + (roi/100.0) ),time);
    double ci = totamt2 - p;

    printf("\nSimple Interest = %0.3lf", si);
    printf("\nCompound Interest = %lf", ci);
}