#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);

    (num&1==0)?printf("%d is Even.",num):printf("%d is Odd.",num);

    return 0;
}