#include <stdio.h>

int main()
{
    
    int a,b,c;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d", &a,&b,&c);

    int greatest = (a>b)?((a>c)?a:c):((b>c)?b:c);

    printf("\nGreatest of the entered 3 numbers is = %d", greatest);
    
    return -99;
}