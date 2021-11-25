#include <stdio.h>
#include <string.h>
int main ()
{
    char a[10];
    
    int i=0,j,f=0;

    printf ("Enter a String: ");
    gets (a);
    
    j = strlen(a)-1;
    
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            f = 1;
            break;
        }
        i++;
        j--;
    }
    
    if(f==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Non Palindrome");
    }
}
