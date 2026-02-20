#include <stdio.h>
#include <math.h>

int main()
{
    int num=0;
    printf("Enter a number:\n");
    scanf("%d",&num);

    int reverseNumber=0;
    int t=num;

    while(t>0)
    {
        reverseNumber = reverseNumber*10 + (t%10);
        t/=10;
    }

    printf("\nReverse of %d = %d.",num,reverseNumber);
    
    return 0;
}