#include <stdio.h>
#include <string.h>
int main ()
{
    char a[10],b[10],c[20];
    int i=0,j=0;
	    
    printf ("Enter first String: ");
	gets (a);
    
    printf("Enter second String: ");
    gets (b);
    
    while(a[i]!='/0')
    {
    	c[j] = a[i];
    	i++;
    	j++;
	}
	
	
    while(b[i]!='/0')
    {
    	c[j] = b[i];
    	i++;
    	j++;
	}
    
    c[j]='/0';
    printf("String concate: ");
    puts (c);
    
    
}
