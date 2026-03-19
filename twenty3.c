#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter %d elements in the array:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int large=a[0],small=a[n-1];

    for(int i=0;i<n;i++)
    {
        if(small>a[i])
            small=a[i];
        if(large<a[i])
            large=a[i];
    }

    printf("\nLargest of all elements = %d.\nSmallest of all elements = %d.",large,small);
    
    return 0;
}