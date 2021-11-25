#include <stdio.h>

void main()
{
	int n,temp,i,r,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	temp = n;
	
	while(n!=0)
	{
		r = n%10;
		sum = sum + r*r*r;
		n = n/10;
	}
	
	if(sum == temp)
	{
		printf("Number is Armstrong");
	}
	else
	{
		printf("Number is not Armstrong");
	}
}


