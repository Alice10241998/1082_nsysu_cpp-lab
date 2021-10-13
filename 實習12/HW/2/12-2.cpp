#include <iostream>
#include "TwoD.h"
using namespace std;
using namespace TD;

int main()
{
	int r,c,i,j;
	int tem;
	cout<<"Enter the row and column dimensions of the array:\n";
	cin>>r>>c;
	TwoD a1(r,c);
	cout<<"Enter "<<r<<" rows of "<<c<<" integers each:"<<endl;
	for(i=0;i < r;i++)
	{
		for(j = 0;j < c;j++)
		{
			cin>>tem;
			a1.set(i,j,tem);
		}
	}
	cout<<"Enter the row and column dimensions of the array:\n";
	cin>>r>>c;
	TwoD a2(r,c);
	cout<<"Enter "<<r<<" rows of "<<c<<" integers each:"<<endl;
	for(i=0;i < r;i++)
	{
		for(j = 0;j < c;j++)
		{
			cin>>tem;
			a2.set(i,j,tem);
		}
	}
	cout<<"matrix3 = matrix2"<<endl;
	TwoD a3,a4;
	a3 = a2;
	cout<<"Matrix3 =\n";
	a3.show();
	cout<<"matrix3 = matrix1 + matrix2\nMatrix3 =\n";
	a4 = a1+a2;
	a4.show();
	return 0;
}






