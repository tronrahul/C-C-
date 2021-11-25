#include<stdio.h>


int main()
{
	int i,j,n,k,m=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		
		for(k=1;k<=m;k++)
		{
			if(k==1 || k==m || n==m)
			{
				printf("*");	
			}
				
			else
			{
				printf(" ");
			}
		
		}
			
			printf("\n");
			m++;		
	}
	return 0;

}
