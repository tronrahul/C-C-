#include<iostream>
using namespace std;

int main()
{
	int n,r,rem,sum=0,len=1,i;
	cin>>n;
	cin>>r;
	for(i=1;i>0;i++)
	{
		rem = n%10;
		sum = sum+rem;
		n = n/10;
	}
	cout<<sum;
}
