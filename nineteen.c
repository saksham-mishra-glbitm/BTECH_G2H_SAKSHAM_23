#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int ppow(int x , int power);
bool arms(int num);
int main()
{
    printf("Armstrong Numbers form 1 to 100 are:\n");
    for(int i=1;i<=100;i++)
    {
        if(arms(i))
            printf("%d ",i);
    }
}

bool arms(int n)
{
    int numD = (int)(log10(n)) + 1;

    int sum = 0;
    int t=n;

    while(t>0)
    {
        int dig = t%10;
        sum += ppow(dig , numD);
        t/=10;
    }
    
    if(sum == n)
        return true;
    else
        return false;
}

int ppow(int x , int power)
{
    int res=1;
    for(int i=0;i<power;i++)
    {
        res*=x;
    }
    return res;
}