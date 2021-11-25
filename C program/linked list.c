//Link list
#include<stdio.h>
#include<malloc.h>

void create();
void insert();
void Delete();
void display();

struct node 
{
	int data;
	struct node *add;
};

struct node *start= NULL, *temp, *New, *prev, *next;

int main()
{
	int ch;
	do
	{
		printf("\n----------LINK LIST----------\n");
		printf("Press 1 for create\n");
		printf("Press 2 for insert\n");
		printf("Press 3 for delete\n");
		printf("Press 4 for display\n");
		printf("Press 5 for exit\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: create();
			break;
			case 2: insert();
			break;
			case 3: Delete();
			break;
			case 4: display();
			break;
			case 5:
			break;
			default: printf("Enter a valid choice\n");
		}
	}
	
	while(ch!=5);
}

void create()
{
	int n;
	char ch;
	if(start == NULL)
	{
		printf("\nEnter a number: ");
		scanf("%d",&n);
		start = (struct node *) malloc (sizeof(struct node));
		start->data = n;
		start->add = NULL;
		temp = start;
		
		printf("\nTo add more elements press 'Y': ");
		scanf(" %c",&ch);
		while(ch=='y' || ch=='Y')
		{
			printf("\nEnter a number: ");
			scanf("%d",&n);
			
			New = (struct node *) malloc (sizeof(struct node));
			New->data = n;
			New->add = NULL;
			temp->add = New;
			temp = New;
			
			printf("\nTo add more elemets press 'Y': ");
			scanf(" %c",&ch);
		}
	}
	
	else
	{
		printf("\nList already created\n");
	}
}

void insert()
{
	int n,position,count=0,i=1;
	if(start == NULL)
	{
		printf("\nList not created, create a list first");
	}
	
	else
	{
		printf("\nEnter a value: ");
		scanf("%d",&n);
		
		New = (struct node *) malloc (sizeof(struct node));
		New->data = n;
		New->add = NULL;
		
		printf("\nEnter a position: ");
		scanf("%d",&position);
		
		if(position == 1)
		{
			New->add = start;
			start = New;
		}
		else
		{
			temp = start;
			while(temp!=NULL)
			{
				count++;
				temp = temp->add;
			}
		
			if(position>count+1)
			{
				printf("\nEnter a position less than or equal to %d",count+1);
			}	
			else if(position == count+1)
			{
				temp = start;
				while(temp->add!=NULL)
				{
					temp = temp->add;
				}
				temp->add = New;
			}
			
			
			else
			{
				next = start;
				while(i<position)
				{
					prev = next;
					next = next->add;
					i++;
				}
				prev->add = New;
				New->add = next;
			}
		}
	}
}

void Delete()
{
	int count=0,i=1,position;
	if(start == NULL)
	{
		printf("\nList not created, create a list first");
	}
	else
	{
		printf("\nEnter a position for deletion: ");
		scanf("%d",&position);
		
		if(position == 1)
		{
			temp = start;
			start = start->add;
			printf("\nDeleted element = %d",temp->data);
			free(temp);	
		}	
		else
		{
			temp = start;
			while(temp!=NULL)
			{
				count++;
				temp = temp->add;
			}
			
			if(position>count)
			{
				printf("\nInvalid position, it could be less than or equal to %d\n", count);
			}
			else if(position == count)
			{
				next = start;
				while(next->add!=NULL)
				{
					prev = next;
					next = next->add;
				}
				printf("\nDeleted Element = %d\n",next->data);
				free(next);
				prev->add = NULL;
			}
			else
			{
				next = start;
				while(i<position)
				{
					prev = next;
					next = next->add;
					i++;
				}
				
				temp = next;
				next = next->add;
				printf("\nDeleted Element = %d\n",temp->data);
				free(temp);
				prev->add = next;
			}
		}
	}
}

void display()
{
	if(start == NULL)
	{
		printf("\nList not created, create a list first");
	}
	else
	{
		printf("\nThe list contain: \n");
		temp = start;
		while(temp!=NULL)
		{
			printf("%d  ",temp->data);
			temp = temp->add;
		}
	}
	printf("\n");
}
