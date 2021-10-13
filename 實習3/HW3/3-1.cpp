#include<iostream>
using namespace std;

void swap_value(double n1,double n2)
{
	double tmp;
	tmp=n1;
	n1=n2;
	n2=tmp;
	cout <<"In swap_value function : " <<n1 <<" " <<n2 <<endl;
}

void swap_ref(double &n1,double &n2)
{
	double tmp;
	tmp=n1;
	n1=n2;
	n2=tmp;
	cout <<"In swap_ref function : " <<n1 <<" " <<n2 <<endl;
}

int main()
{
	double n1,n2;	
	cout<<"Enter two numbers:" <<endl;
	cin>> n1 >>n2;
	cout<<"your initial numbers : " <<n1 <<" " <<n2 <<endl <<endl <<endl;
	
	swap_value(n1,n2);
	cout<<"In main function (after swap_value): " <<n1 <<" " <<n2 <<endl <<endl <<endl;

	swap_ref(n1,n2);
	cout<<"In main function (after swap_ref): " <<n1 <<" " <<n2 <<endl <<endl <<endl;
}
