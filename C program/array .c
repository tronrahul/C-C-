#include <stdio.h>

void main()
{   
    int a[3][3],b[3][3],c[3][3],i,j;
    
    printf("Enter 9 elements in first array: \n");
    
    for(i=0; i<3; i++)
    {
        for(j=0;j<3;j++)
        {   
            printf("Enter Value of A%d%d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("\nEnter 9 elements in Second array: \n");
    
    for(i=0; i<3; i++)
    {
        for(j=0;j<3;j++)
        {   
            printf("Enter Value of B%d%d : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    
    printf("\n SUM: \n");
    
    for(i=0; i<3; i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j] = a[i][j]+b[i][j];
            
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
