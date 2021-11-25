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
	
	int temp=0;
    for(int i=0;i<n-1;i++)
    {
    	for(int j=0;j<n-i-1;j++)
    	{
	        if(arr[j] > arr[j+1])
	        {
	            temp = arr[j];
	            arr[j] = arr[j+1];
	            arr[j+1] = temp;
        	}
    	}
    }
    
    cout<<"\nThe values after sorting: ";
	for (int i=0;i<n;i++)
	{
		cout<<"\nValue at "<<i+1<<" position: "<<arr[i]<<endl;
	}
	
    
    
}
