#include <stdio.h>

int main()
{
    int n,sum=0,r,temp,l=0; 
    scanf("%d",&n);
    temp=n; 
    while(n!=0){ 
        r=n%10; 
        sum=sum*10+r; 
        n=n/10; 
    } 
    n=temp; 
    while(sum!=0){ 
        r=sum%10; 
        switch(r){ 
            case 0: printf("zero\n");break; 
            case 1: printf("one\n");break; 
            case 2: printf("two\n");break; 
            case 3: printf("three\n");break;
            case 4: printf("four\n");break;
            case 5: printf("five\n");break;
            case 6: printf("six\n");break; 
            case 7: printf("seven\n");break; 
            case 8: printf("eight\n");break; 
            case 9: printf("nine\n");break; 
        } 
        sum=sum/10; 
    }  
    while(temp%10==0){ 
        printf("zero\n"); 
        temp=temp/10;
    }
    
    
    return 0;

}


