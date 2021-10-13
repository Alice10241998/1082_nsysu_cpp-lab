#include<iostream>
using namespace std;
int main(void)
{
	int a,b,c,tmp,aa,bb,cc;
	cout << "Enter three integers :" <<endl;
	cin>>a>>b>>c;
	aa=a;bb=b;cc=c;

	if(a>=b)
	{
		if(a>=c)
		{
			tmp=a;
			a=c;
			c=tmp;
		}
	}	
	else
	{
		if(b>=c)
		{
			tmp=b;
			b=c;
			c=tmp;
		}
	}	

	if(a+b>c)
	{
		cout <<aa <<" " <<bb <<" " <<cc <<" " << "can be a triangle." <<endl;
		if(a*a+b*b<c*c)
		cout <<aa <<" " <<bb <<" " <<cc <<" " << "form an Obtuse triangle." <<endl;
		else if(a*a+b*b>c*c)
		cout <<aa <<" " <<bb <<" " <<cc <<" " << "form an Acute triangle." <<endl;
		else
		cout <<aa <<" " <<bb <<" " <<cc <<" " << "form a Right triangle." <<endl;
	}
	else
		cout<< "They can not form a triangle." <<endl;

	return 0;
}

