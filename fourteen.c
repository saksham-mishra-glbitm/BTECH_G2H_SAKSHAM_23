#include <stdio.h>
#include <stdbool.h>

bool evenOdd(int num);
int main()
{
    
    int num=0;
    printf("Enter the number till which the sum of even and odd numbers is to be found(num>0):\n");
    scanf("%d",&num);

    if(num<=0)
    {
        printf("\n***INVALID INPUT***\nInput should be greater than 0.");
        return -99;
    }

    if(evenOdd(num)==false)
    {
        int oddTerms = (num+1)/2;
        int evenTerms = (num-1)/2;

        int sumOdd = oddTerms*oddTerms;
        int sumEven = evenTerms*(evenTerms+1);

        printf("\nSum of odd terms till %d = %d.",num,sumOdd);
        printf("\nSum of even terms till %d = %d.",num,sumEven);
    }

    if(evenOdd(num))
    {
        int terms = num/2;

        int sumOdd = terms*terms;
        int sumEven = terms*(terms+1);

        printf("\nSum of odd terms till %d = %d.",num,sumOdd);
        printf("\nSum of even terms till %d = %d.",num,sumEven);
    }
    
    return 0;
}

bool evenOdd(int num)
{
    return ((num&1)==0);
}