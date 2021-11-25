#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Encapsulation
{
	int x;
	public:
		void set(int a)
		{
			x = a;
		}
		
		void show()
		{
			cout<<"Value is: "<<x;
		}
};

int main()
{
	Encapsulation obj;
	obj.set(15);
	obj.show();
}
