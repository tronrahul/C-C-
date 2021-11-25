//Stack using array
#include<stdio.h>
#define maxsize 10

int stack[maxsize],top = -1;
int push();
int pop();
int display();

int main()
{
	int ch;
	do
	{
		printf("\n----------STACK----------\n");
		printf("Press 1 for push\n");
		printf("Press 2 for pop\n");
		printf("Press 3 for display\n");
		printf("Press 4 for exit\n");
		printf("Enter you choice: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: display();
			break;
			case 4: 
			break;
			default: printf("Enter a valid choice");
		}
	}
	
	while(ch!=4);
}

int push()
{
	int n;
	if (top==maxsize-1)
	{
		printf("Stack Overflow\n");
	}
	else
	{
		printf("Enter a value: ");
		scanf("%d",&n);
		top++;
		stack[top] = n;
	}	
}

int pop()
{
	if(top==-1)
	{
		printf("\nStack Underflow\n");
	}
	else
	{
		printf("\nDeleted Element = %d\n",stack[top]);
		top--;
	}	
}

int display()
{
	int i;
	if(top==-1)
	{
		printf("\nStack Underflow\n");
	}
	else
	{
		printf("\n");
		for(i=0;i<=top;i++)
		{
			printf("%d ",stack[i]);
		}
		printf("\n");
	}
}














