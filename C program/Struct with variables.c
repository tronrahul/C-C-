#include<stdio.h>
#include<stdlib.h>

struct student 
{
	int roll_no;
	char name[25];
	float percent;
	char subject[10];
}s1,s2;

int main()
{
	printf("Enter Roll Number: ");
	scanf("%d",&s1.roll_no);
	
	printf("Enter Name: ");
	scanf("%s",s1.name);
	
	printf("Enter Percentage: ");
	scanf("%f",&s1.percent);
	
	printf("Enter Subject: ");
	scanf("%s",s1.subject);

	printf("\n\n");
	
	printf("Enter Roll Number: ");
	scanf("%d",&s2.roll_no);
	
	printf("Enter Name: ");
	scanf("%s",s2.name);
	
	printf("Enter Percentage: ");
	scanf("%f",&s2.percent);
	
	printf("Enter Subject: ");
	scanf("%s",s2.subject);

	

	printf("\nYou have entered:\n");
	
	printf("Roll Number \t Name \t\t Percentage \t\t Subject\n");
	printf("%d \t\t %s \t\t %f \t\t %s\n",s1.roll_no,s1.name,s1.percent,s1.subject);
	printf("%d \t\t %s \t\t %f \t\t %s\n",s2.roll_no,s2.name,s2.percent,s2.subject);


}


