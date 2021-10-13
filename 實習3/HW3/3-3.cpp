#include<iostream>
using namespace std;

void str2(string a,string b)
{
	cout<<"Result: "<<a+b <<endl;
}

void str3(string a,string b,string c)
{
	cout<<"Result: "<<a+b+c <<endl;
}

int main()
{
	string a,b,c;
	int num;
	
	cout <<"Enter the number of input (if neither 2 nor 3, exit the program) :";
	cin >> num;
	if(num==2)
	{
		cin >>a >>b;
		str2(a,b);
	}
	else if(num==3)
	{
		cin >>a >>b >>c;
		str3(a,b,c);
	}
}
