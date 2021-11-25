#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class constructor
{
	public:
		int x;
	    constructor()
		{
			cout<<"Default Constructor called"<<endl;	
		}
		
		constructor(int a)
		{
			a = x;
			cout<<"Parameterised Constructor called"<<endl;
		}
		
		constructor(const constructor &c)
		{
			x = c.x;
			cout<<"Copy Constructor called"<<endl;
		}
		
		~constructor()
		{
			cout<<"Destructor called\n";
		}
		
};

int main()
{
	constructor();
	constructor c1(5);
	constructor c = c1;	
}
