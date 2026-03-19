#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    printf("Enter the size of the first array: ");
    scanf("%d",&n1);

    int a[n1];
    printf("Enter %d elements in the first array:\n",n1);
    for(int i=0;i<n1;i++)
        scanf("%d",&a[i]);


    printf("\nEnter the size of the second array: ");
    scanf("%d",&n2);
    
    if(n1!=n2)
    {
        fprintf(stderr,"\n***CANNOT ADD ARRAYS OF UNEQUAL ROWS AND COLUMNS***");
        return EXIT_FAILURE;
    }

    int b[n2];
    printf("Enter %d elements in the second array:\n",n2);
    for(int i=0;i<n2;i++)
        scanf("%d",&b[i]);    

    int c[n1];
    printf("\nResultant Array: ");
    for(int i=0;i<n1;i++)
    {
        c[i] = a[i]+b[i];
        printf("%d ",c[i]);
    }

    return 0;
}