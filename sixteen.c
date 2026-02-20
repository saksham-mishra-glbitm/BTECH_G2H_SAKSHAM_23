#include <stdio.h>

int main()
{
    
    int num=0;
    printf("Enter the number:\n");
    scanf("%d",&num);

    if (num<0)
    {
        printf("\n***INVALID INPUT***\nNumber must be >= 0.");
        return -99;
    }
    int count=0;
    for(int i=2;i<(num/2);i++)
    {
        if(num%i==0)
            count++;
    }

    if(count == 0)
        printf("%d is a Prime Number.",num);
    else
        printf("%d is a NOT Prime Number.",num);
    
    return 0;
}
