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
		sum = sum*10+r;
		n = n/10;
	}
	
	if(sum == temp)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("Number is not palindrome");
	}
}


