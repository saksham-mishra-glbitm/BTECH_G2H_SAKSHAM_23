#include <stdio.h>
void read(int n,int mat[n][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
}
void print(int n,int mat[n][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d",&n);

    int mat[n][n];

    //INPUT-->
    printf("\nEnter %d elements in matrix:\n",(n*n));
    read(n,mat);    

    //PRINT-->
    printf("\nMATRIX:\n");
    print(n,mat);

    int ld=0,rd=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                ld+=mat[i][j];
            if((i+j)==(n-1))
                rd+=mat[i][j];
        }
    }  
    
    printf("\nSum of right diagonal elements = %d.\nSum of left diagonal elements = %d.",rd,ld);

    return 0;
}