#include<iostream>
using namespace std;

class infor
{
public:
	infor(string d,string n,string i,string g);
	void result()
	{
	cout<<"The result :"<<endl<<"department: "<<department<<endl<<"Name: "<<name<<endl
	<<"id: "<<id<<endl<<"gender: "<<gender;
	}
private:
	string department,name,id,gender;
};

int main()
{
	string department,name,id,gender;
	

	cout<<"(Enter [exit] to leave)"<<endl;
	cout<<"Enter your department:"<<endl;
	cin>>department;
	cout<<"Enter your name:"<<endl;
	cin>>name;
	cout<<"Enter your Student id:"<<endl;
	cin>>id;
	cout<<"Enter your gender(male/female):"<<endl;
	cin>>gender;
	infor I(department,name,id,gender);
	cout<<endl;
	I.result();
	cout<<endl;
}

infor::infor(string d,string n,string i,string g)
:department(d),name(n),id(i),gender(g){}
