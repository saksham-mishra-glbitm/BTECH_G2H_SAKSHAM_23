#include <stdio.h>
#include <math.h>

int main()
{
    int num=0;
    printf("Enter a number:\n");
    scanf("%d",&num);

    printf("\nSum of digits of %d = %d.",num ,(int)(log10(num))+1);
    
    return 0;
}