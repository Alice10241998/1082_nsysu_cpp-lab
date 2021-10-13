#include<iostream>
using namespace std;

class infor
{
public:
	void d(string d){department=d;};
	void n(string n){name=n;};
	void i(string i){id=i;};
	void g(string g){gender=g;};
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
	infor I[10];
	int k;
	string input;

	while(1)
	{
		cout<<"(Enter [exit] to leave)"<<endl;
		cout<<"Enter your department:"<<endl;
		cin>>input;
		if(input=="exit")
			break;
		I[k].d(input);
		cout<<"Enter your name:"<<endl;
		cin>>input;
		I[k].n(input);
		cout<<"Enter your Student id:"<<endl;
		cin>>input;
		I[k].i(input);
		cout<<"Enter your gender(male/female):"<<endl;
		cin>>input;
		I[k].g(input);
		k++;
	}
	for(int j=0;j<k;j++)
	{
		cout<<endl;
		I[j].result();
		cout<<endl;
	}
}
