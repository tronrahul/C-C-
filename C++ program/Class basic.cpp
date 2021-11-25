#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class animal
{
	public:
		int i;
		
		void input()
		{
			cout<<"Enter a value: "<<endl;
			cin>>i;
		}
		
		void name();
	
};

	void animal::name()
		{
			if(i == 1)
			{
				cout<<"Name of animal is: Dog"<<endl;	
			}
			
			else if(i == 2)
			{
				cout<<"Name of animal is: Cat"<<endl;
			}
			
			else if(i == 3)
			{
				cout<<"Name of animal is: Cow"<<endl;
			}
			
			else
			{
				cout<<"Enter a valid input";
			}
		}

int main()
{
		
	animal obj;
	obj.input();
	obj.name();
}
