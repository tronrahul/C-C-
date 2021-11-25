#include <stdio.h>

void main()
{   
    int a[3][3],b[3][3],c[3][3],i,j,k;
    
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
    
    printf("\n Multiplication: \n");
    
    for(i=0; i<3; i++)
    {
        for(j=0;j<3;j++)
        {
        	c[i][j]=0;
        	for(k=0;k<3;k++)
        	{
 				c[i][j] = c[i][j]+(a[i][k]*b[k][j]);   
			}
			 printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
