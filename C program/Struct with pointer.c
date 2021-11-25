#include<stdio.h>
#include<stdlib.h>

struct student 
{
	int roll_no;
	char name[25];
	float percent;
	char subject[10];
}*s;

int main()
{
	int i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	printf("\n");

	s = (struct student *)malloc(sizeof(struct student)*n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter Roll Number of %d student: ",i+1);
		scanf("%d",&s[i].roll_no);
		
		printf("Enter Name of %d student: ",i+1);
		scanf("%s",s[i].name);
		
		printf("Enter Percentage of %d student: ",i+1);
		scanf("%f",&s[i].percent);
		
		printf("Enter Subject of %d student: ",i+1);
		scanf("%s",s[i].subject);
		
		printf("\n");
    }

	printf("\nYou have entered:\n");
	printf("Roll Number   \t  Name  \t\t   Percentage   \t\t   Subject\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d   \t\t   %s   \t\t   %f   \t\t\t   %s\n",s[i].roll_no,s[i].name,s[i].percent,s[i].subject);
	}
	
	free(s);
}


