#include<iostream>
using namespace std;
class pocket
{
public:
	void get(void);
	void out(void);
	void pay(int n);
private:
	int ten;
	int five;
	int one;
};

void pocket::get(void)
{
	cout<<"How many one-dollar coins ?"<<endl;
	cin>>one;
	cout<<"How many five-dollar coins ?"<<endl;
	cin>>five;
	cout<<"How many ten-dollar coins ?"<<endl;
	cin>>ten;
}

void pocket::out(void)
{
	cout<<"You have : "<<one+5*five+10*ten<<" dollars."<<endl;
}

void pocket::pay(int n)
{
	n=one+5*five+10*ten-n;
	ten=n/10;
	n=n%10;
	five=n/5;
	one=n%5;
cout<<"Remain : one dollar: "<<one<<"; five dollars: "<<five<<"; ten dollars: "<<ten<<endl;
cout<<"total : "<<one+5*five+10*ten<<endl;
}

int main()
{
	pocket p;
	int n;
	p.get();
	p.out();
	cout<<"How much did you pay by cash ?"<<endl;
	cin>>n;
	p.pay(n);
}
