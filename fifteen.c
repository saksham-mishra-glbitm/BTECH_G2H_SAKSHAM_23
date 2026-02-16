#include <stdio.h>

int main()
{
    
    int num=0;
    printf("Enter the number:\n");
    scanf("%d",&num);

    if (num < 0)
    {
        printf("\n***INVALID INPUT***\nNumber must be >= 0.");
        return -99;
    }

    printf("\nThe Fibonacci Series till %d: ",num);
    int n1=0;
    int n2=1;

    while(n1<=num)
    {
        if(n1==0)
            printf("%d", n1); 
        else
            printf(", %d", n1);

        int t=n1+n2;
        n1=n2;
        n2=t;
    }
    
    return 0;
}
