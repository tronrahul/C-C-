#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	int arr[n];
	cout<<"\nEnter values in array:- ";
	for (int i=0;i<n;i++)
	{
		cout<<"\nEnter a value at "<<i+1<<" position: ";
		cin>>arr[i];
	}
	cout<<"\nThe values are: ";
	for (int i=0;i<n;i++)
	{
		cout<<"\nValue at "<<i+1<<" position: "<<arr[i]<<endl;
	}
	
	int temp=0, start =0, end = n-1;
	while(start < end)
		{
			temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;
			start++;
			end--;
		}
		
	cout<<"\nThe values after reverse: ";
	for (int i=0;i<n;i++)
	{
		cout<<"\nValue at "<<i+1<<" position: "<<arr[i]<<endl;
	}
	
}
