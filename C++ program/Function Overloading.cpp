#include<iostream>
using namespace std;

class complex
{ 
	public:
		int real,imag;
		
		void set()
		{
			cout<<"Enter real part: ";
			cin>>real;
			cout<<"Enter imaginary part: ";
			cin>>imag;
			cout<<"\n";
		}
		
		void show()
		{
			cout<<real<<" + "<<imag<<"i\n";
		}
		
		void sum(complex c1, complex c2)
		{
			real = c1.real + c2.real;
			imag = c1.imag + c2.imag;
		}
	
};

int main()
{
	complex c1,c2,c3;
	c1.set();
	c2.set();
	c3.sum(c1,c2);
	c3.show();
}

