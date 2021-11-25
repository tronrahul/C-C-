#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n,*p;
	printf("Enter size of array: ");
	scanf("%d",&n);
	
	p = (int *) malloc (sizeof(int)*n);
	
	printf("\nEnter %d element: \n",n);
	for(i=0;i<n;i++)
	{
		printf("Enter value at %d position: ",i+1);
		scanf("%d",&p[i]);
	}

	printf("\nYou have entered: \n");
		for(i=0;i<n;i++)
	{
		printf("Enter value at %d position: ",i+1);
		printf("%d\n",p[i]);
	}
	
	free(p);

}
