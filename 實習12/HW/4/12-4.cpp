#include <iostream>
#include "newuser.h"
using namespace std;
using namespace NU;

int main()
{
	newuser A;
	string name,word;
	cout<<"Please enter your name :\n";
	cin>>name;
	while(name.size()<5)
	{
		cout<<"Please enter new name again.\n";
		cout<<"Please enter your name :\n";
		cin>>name;
	}
	A.inputusername(name);

	cout<<"Please enter your password :\n";
	cin>>word;
	while(word.size()<5)
	{
		cout<<"Please enter new password again.\n";
		cout<<"Please enter your password :\n";
		cin>>word;
	}
	A.inputpassword(word);

	cout<<"Your account is : "<<A.getusername()<<endl;
	cout<<"Your password is : "<<A.getpassword()<<endl;
}

