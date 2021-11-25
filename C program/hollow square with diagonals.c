#include<stdio.h>


int main()
{
	int i,n,a[100],value,f=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter a value to be searched: ");
	for (i=1;i<=n;i++)
	{
		if(a[i]==value)
		{
			 f = 1;
			 break;
		}
	}
		
		if(f==1)
		{
			printf("\nElement is found");	
		}	
		else
		{
			printf("Element not found");
		}
		
}


