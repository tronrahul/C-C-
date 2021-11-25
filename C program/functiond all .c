#include<stdio.h>

int show(int x[],int size);
int add(int x[],int size);
int min(int x[],int size);
int max(int x[],int size);
int search(int x[],int size,int n);
int sort(int x[],int size);

int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9,10},b[] = {5,10,15,20,25};
	int sum,minimum,maximum,flag;
	
	printf(":....SHOW FUNCTION....:\n\n");
	printf("Elements of array a: ");
	show(a,10);
	printf("\nElements of array b: ");
	show(b,5);
	printf("\n\n");

	printf("--------------------------------");

	printf("\n\n:....ADD FUNCTION....:\n\n");
	sum = add(a,10);
	printf("Sum of array a: %d\n",sum);
	sum = add(b,5);
	printf("\nSum of array b: %d",sum);
	printf("\n\n");

	printf("--------------------------------");
	
	printf("\n\n:....MINIMUM FUNCTION....:\n\n");
	minimum = min(a,10);
	printf("Minimum of array a: %d",minimum);
	minimum = min(b,5);
	printf("\n\nMinimum of array b: %d",minimum);
	printf("\n\n");

	printf("--------------------------------");

	printf("\n\n:....MAXIMUM FUNCTION....:\n\n");
	maximum = max(a,10);
	printf("Maximum of array a: %d",maximum);
	maximum = max(b,5);
	printf("\n\nMaximum of array b: %d",maximum);
	printf("\n\n");
	
		printf("--------------------------------");

	printf("\n\n:....SEARCH FUNCTION....:\n\n");
//	printf("Enter the element to be searched in array a: ");
//	scanf("%d",&n);	
//	printf("Enter the element to be searched in array b: ");
//	scanf("%d",&n);
	
	search(a,10,6);
	printf("\n");
	search(b,5,15);

	if(flag==1)
		{
			printf("Element found");
		}
	else
		{
			printf("Element not found");
		}

}

int show(int x[],int size)
{
	int i;
	printf("\n");
	for(i=0;i<size;i++)
	{
		printf("%d  ",x[i]);
	}
	printf("\n");
}

int add(int x[],int size)
{
	int i,sum = 0;
	for(i=0;i<size;i++)
	{
		sum = sum+x[i];
	}
	return sum;
}

int min(int x[],int size)
{
	int i,minimum;
	minimum = x[0];
	for(i=1;i<size;i++)
	{
		if(minimum>x[i])
		{
			minimum = x[i];
		}
	}
	return minimum;
}

int max(int x[],int size)
{
	int i,maximum;
	maximum = x[0];
	for(i=1;i<size;i++)
	{
		if(maximum<x[i])
		{
			maximum = x[i];
		}
	}
	return maximum;
}

int search(int x[],int size,int n)
{
	int i,flag=0;
	for(i=0;i<size;i++)
	{
		if(x[i]==n)
		{
			flag = 1;
			break;
		}
		
	}
	
	return flag ;
	
}
