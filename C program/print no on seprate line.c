#include <stdio.h>

int main()
{
	int n,i,f = 0;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	if(n<0)
	{
		n = n * (-1);
	}
	
	if (n == 0)
	{
		printf("Number is neither a Prime nor non prime\n");	
		return 0;
	}
	
	else if (n == 1)
	{
		printf("Number is co Prime\n");
		return 1;
	}
	
	else
	{
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				f = 1;
				break;
			}
		}
	}
	
	if(f == 1)
	{
		printf("Number is Non Prime\n");
	}
	else
	{
		printf("Number is prime\n");
	}
}


