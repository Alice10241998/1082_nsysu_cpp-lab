#include<iostream>
using namespace std;

class Pair
{
	public:
	Pair(){first=0; second=0;}
	Pair(int f){first=f;second=0;}
	Pair(int f, int s){first=f, second=s;}
	friend Pair operator+(Pair& A, Pair& B);
	friend Pair operator*(Pair& A, int c);
	friend ostream& operator <<(ostream& output, Pair& A);
	
	private:
	int first, second;
};

Pair myinput();

int main(){
	Pair A, B, C, p, pp, m;
	cout << "Please set 3 pairs" << endl;
	A=myinput();
	B=myinput();
	C=myinput();
	int c;
	cout << "Enter constant number c: " ;
	cin >> c;
	cout << "The orderd-pair :" << endl;
	cout << "x = "<< A;
	cout << "y = "<< B;
	cout << "z = "<< C;
	p=A+B;
	pp=p+C;
	m=C*c;
	cout << "x + y + z = " << pp;
	cout << "z * c = " << m;

}
Pair myinput()
{
	int num, f, s;
	cout << "Enter 0 or 1 or 2(0 means no parameter, 1 means one parameter, 2 means two parameter):" << endl;
	cin >> num;
	if(num==0) return Pair();
	else if (num==1)
	{
		cout << "Please enter first number:" << endl;
		cin >> f;
		return Pair(f);
	}
	else
	{
		cout << "Please enter first & second number:" << endl;
		cin >> f >>s;
		return Pair(f, s);
	}
	
}
Pair operator+(Pair& A, Pair& B)
{
	int f, s;
	f=A.first+B.first;
	s=A.second+B.second;
	return Pair(f, s);
}
Pair operator*(Pair& A, int c)
{
	int f, s;
	f=A.first*c;
	s=A.second*c;
	return Pair(f, s);
}
ostream& operator <<(ostream& output, Pair& A)
{
	output << "(" << A.first << ", " << A.second << ")" << endl;
}

