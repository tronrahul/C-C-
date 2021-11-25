#include<stdio.h>

int fact(int);
int main()
{
	int n,f;
	printf("Enter a number: ");
	scanf("%d",&n);
	f = fact(n);
	printf("Factorial of number is: %d",f);
}

int fact(int n)
{
	int f = 1;
	if(n==1)
	{
		return 1;
	}
	else
	{
		f = fact(n-1)*n;
	}
	return f;
}
