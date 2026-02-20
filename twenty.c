#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long bin = 0;
    long dec = 0;
    printf("Enter binary number: \n");
    scanf("%ld", &bin);
    printf("Enter decimal number: \n");
    scanf("%ld", &dec);

    // Bin 2 dec
    long t = bin;
    int d = (t==0)?1 : ((int)log10(t)+1);
    long decimal = 0;
    for (int i=0; i<d; i++) 
    {
        decimal+=(t%10)*pow(2,i);
        t/=10;
    }

    // dec 2 Bin
    long revbinary = 0;
    long temp = dec;
    while(temp>0) 
    {
        revbinary=revbinary*10+(temp%2);
        temp/=2;
    }

    long binary = 0;

    while (revbinary>0)
    {
        binary=binary*10+(revbinary%10);
        revbinary/=10;
    }
    
    printf("\n%ld to binary = %ld.",dec,binary);
    printf("\n%ld to decimal = %ld.",bin, decimal);
    
    return 0;
}