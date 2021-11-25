#include<iostream>
using namespace std;

int main()
{
	int arr = [0,1,2];
	int num = 0, temp;
	cout<<arr;
	for (int i=0;i<4;i++)
	{
		if(arr[num] > arr[num + 1])
		{
			temp = arr[num];
			arr[num] = arr[num+1];
			arr[num+1] = temp;
		}
	}
	
	cout<<arr;
}
