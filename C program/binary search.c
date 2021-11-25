#include<stdio.h>

int main()
{
	int a[50],i,f=0,n,size,mid;
	printf("Enter size of array: ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter %d element: ",i+1);
		scanf("%d",&a[i]);
	}
	int low=0;
	int high=size-1;
	
	printf("Enter the value to searched: ");
	scanf("%d",&n);
	
	while(low<=high)
{
	mid = (low+high)/2;
	if(a[mid] == n)
	{
		f = 1;
		break;
	}
	else if(a[mid] < n)
	{
		low = mid+1;
	}
	else
	{
		high = mid-1;	
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
	
}

