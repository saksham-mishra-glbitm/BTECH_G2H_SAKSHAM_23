#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int a=0,b=0,c=0,d=0,e=0;

    printf("Enter marks of 5 subjects(out of 100):\n ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
  
    int sum = 0;
    double pct =0.0;

    sum = a+b+c+d+e;
    pct = (sum/5.0);
     
    printf("\nSum of marks = %d", sum);
    printf("\nPercentage of marks = %0.2lf", pct);

    //return 0;
}