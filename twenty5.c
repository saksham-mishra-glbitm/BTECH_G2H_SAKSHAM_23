#include <stdio.h>
#include <stdbool.h>

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

    printf("\nInput Array: ");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

    bool flag=false;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int x=a[j];
                a[j]=a[j+1];
                a[j+1]=x;
                flag=true;
            }                
        }
    if(!flag)
        break;
    } 

    printf("\nResultant Array: ");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    
    return 0;
}