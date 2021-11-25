//Queue using array
#include<stdio.h>
#define maxsize 10

int q[maxsize],rear = -1,front =0;
void insert();
void Delete();
void display();

int main()
{
	int ch;
	do
	{
		printf("\n----------Queue----------\n");
		printf("Press 1 for insert\n");
		printf("Press 2 for delete\n");
		printf("Press 3 for display\n");
		printf("Press 4 for exit\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: insert();
			break;
			case 2: Delete();
			break;
			case 3: display();
			break;
			case 4:
			break;
			default: printf("Enter a valid choice\n"); 
		}
	}
	
	while(ch!=4);
}

void insert()
{
	int n;
	if(rear == maxsize-1)
	{
		printf("\nQueue Overflow\n");
	}
	else
	{
		printf("Enter a value: ");
		scanf("%d",&n);
		rear++;
		q[rear] = n;
	}
}

void Delete()
{
	if(front>rear)
	{
		printf("\nQueue Underflow\n");
	}
	else
	{
		printf("\nDeleted Element = %d",q[front]);
		front++;
	}
}

void display()
{
	int i;
	if(front>rear)
	{
		printf("\nQueue Underflow\n");	
	}
	else
	{
		printf("\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d  ",q[i]);
		}
		printf("\n");
	}
}




