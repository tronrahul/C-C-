#include<stdio.h>

int main()
{
	int a[10],i,f=0,n,size;
	printf("Enter size of array: ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("Enter %d element: ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("Enter the value to searched: ");
	scanf("%d",&n);
	for(i=0;i<size;i++)
	{
		if(a[i]==n)
		{
			f = 1;
			break;
		}
	}
	
	if(f==1)
	{
		printf("element found");
	}
	else
	{
		printf("element cant found");
	}
	
	return f;


	
	
}

