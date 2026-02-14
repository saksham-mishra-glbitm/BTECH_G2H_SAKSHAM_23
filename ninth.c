#include <stdio.h>

int main()
{
    
    long year = 0;
    printf("Enter year:\n");
    scanf("%ld", &year);

    if(((year%4==0)&&(year%100!=0)) || (year%400==0))
        printf("%ld is a Leap Year.",year);
    else
    printf("%ld is NOT a Leap Year.",year);

    return 0;

}
