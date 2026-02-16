#include <stdio.h>

int factorial(int num);
int main()
{
    int num=0;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("\nFactorial of %d = %d.",num,factorial(num));

    return 0;
}

int factorial(int num)
{
    if(num==0)
        return 1;
    
    return num*factorial(num-1);
}