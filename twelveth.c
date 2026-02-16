#include <stdio.h>

int main()
{
    
    int x=0;
    printf("Enter the value till which the sum is to be found:\n");
    scanf("%d",&x);

    double sum = x*(x+1)/2.0;

    printf("\nSum till %d = %lf",x,sum);
    
    return 0;
}