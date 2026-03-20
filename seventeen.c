#include <stdio.h>
#include <math.h>

int main()
{
    int num=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    int t=num,sum=0;
    
    while(t!=0)
    {
        sum+=t%10;
        t/=10;
    }

    printf("\nSum of digits of %d = %d.",num ,sum);
    
    return 0;
}
