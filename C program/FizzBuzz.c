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
				printf("%d = FizzBuzz\n",i);
			}
			
			else if(i%3==0)
			{
				printf("%d = Fizz\n",i);
			}
			
			else if(i%5==0)
			{
				printf("%d = Buzz\n",i);
			}
			
			else
			{
				printf("%d\n",i);
			}
		}
	}
}
