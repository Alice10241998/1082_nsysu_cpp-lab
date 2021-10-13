#include<iostream>
using namespace std;

int main()
{
	int *p1,*p2;
	int i1=8,i2=10;
	p1=&i1;
	p2=&i2;

	cout<<"Value of i1 is : "<<i1<<"\t, start at : "<<p1<<endl;
	cout<<"Value of i2 is : "<<i2<<"\t, start at : "<<p2<<endl;

	cout<<"When we let i1 = i2 ......"<<endl;
	i1=i2;

	cout<<"Value of i1 is : "<<i1<<"\t, start at : "<<p1<<endl;
	cout<<"Value of i2 is : "<<i2<<"\t, start at : "<<p2<<endl;	

	cout<<"When we let p1 = p2 ......"<<endl;
	p1=p2;

	cout<<"Value of i1 is : "<<i1<<"\t, start at : "<<p1<<endl;
	cout<<"Value of i2 is : "<<i2<<"\t, start at : "<<p2<<endl;
	
}
