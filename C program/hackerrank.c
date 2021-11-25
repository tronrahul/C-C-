#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,num,a;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num==0)
	{
		printf("Factorial is: 1");	
	}	
	for(i=1;i<=num;i++)
	{
	    if(i>0)
		{
			if(i%3==0 && i%5==0)
			{
				printf("FizzBuzz\n");
			}
			else if(i%3==0)
			{
				printf("Fizz\n");
			}
			else if(i%5==0)
			{
				printf("Buzz\n");
			}
			else
			{
				printf("%d\n",i);
			}
		}
	}
}
