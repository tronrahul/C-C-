#include <stdio.h>

void main()
{
	int n,temp,i,r,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		r = n%10;
		sum = sum*10+r;
		n = n/10;
	}
	
	while(sum!=0)
	{
		r = sum%10;
		printf("%d\n",r);
		sum = sum/10;
	}
}


