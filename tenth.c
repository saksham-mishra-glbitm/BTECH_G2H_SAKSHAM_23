#include <stdio.h>

int main()
{
    int a=0,b=0,c=0,d=0,e=0;

    printf("Enter marks of 5 subjects(out of 100):\n ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if(a>100 || b>100 || c>100 || d>100 || e>100)
    {
        printf("\n***INVALID INPUT***\nMarks cannot be greater than 100.");
    }
  
    int sum = 0;
    double pct =0.0;

    sum = a+b+c+d+e;
    pct = (sum/5.0);
     
    printf("\nPercentage of marks = %0.2lf", pct);

    if(pct>=90)
        printf("\nGrade = A.");
    else if(pct<90 && pct>=80)
        printf("\nGrade = B.");
    else if(pct<80 && pct>=60)
        printf("\nGrade = C.");
    else
        printf("\nGrade = D.");

    return 0;
}