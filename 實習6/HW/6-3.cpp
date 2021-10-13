#include<iostream>
using namespace std;
class pocket
{
public:
	void oset(int oset){one=oset;};
	void fset(int fset){five=fset;};
	void tset(int tset){ten=tset;};
	int oget(){return one;};
	int fget(){return five;};
	int tget(){return ten;};
private:
	int one,five,ten;
};

int main()
{
	pocket d;
	int tmp;
	cout<<"How many one-dollar coins ?"<<endl;
	cin>>tmp;
	d.oset(tmp);
	cout<<"How many five-dollar coins ?"<<endl;
	cin>>tmp;
	d.fset(tmp);
	cout<<"How many ten-dollar coins ?"<<endl;
	cin>>tmp;
	d.tset(tmp);
	cout<<"You have : "<<d.oget()+5*d.fget()+10*d.tget()<<" dollars."<<endl;
}
