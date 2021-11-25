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
	
	cout<<"\nDuplicate values are: ";
	for (int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if(arr[i] == arr[j])
			{
				cout<<arr[j];
			}
		}
	}

	
}

