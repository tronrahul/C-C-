#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter values of array";
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Values are: ";
	for (int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	
	int start = 0, end = n-1, temp = 0;

		while(start < end)
		{
			temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;
			start++;
			end--;
		}
	
	
	cout<<"\nValues after reverse are: ";
	for (int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	
	
	
}
