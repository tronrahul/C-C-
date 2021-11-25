#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Encapsulation
{
	int x,y,z;
	public:
		void set(int a, int b, int c)
		{
			x = a;
			y = ++b;
			z = ++c + c++;
		}
		
		void show()
		{
			cout<<"Value is: "<<x<<"\n";
			cout<<"Value is: "<<y<<"\n";
			cout<<"Value is: "<<z<<"\n";
		}
};

int main()
{
	Encapsulation obj;
	obj.set(15,10,20);
	obj.show();
}
