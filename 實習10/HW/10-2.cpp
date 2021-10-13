#include<iostream>

using namespace std;

int main()
{
	string s;
	char c;
	int i,num;

	c=cin.peek();
	cin.ignore(10,'D');
	cin>>num;
	cin.get();
	
	if(c=='U')	
		cout<<"Convert USD to TWD : TWD "<<num*30<<endl;
	else if(c=='T')
		cout<<"Convert TWD to USD : USD "<<num/30<<endl;
	else
	cout<<"The currency you input is not provided."<<endl;

}
