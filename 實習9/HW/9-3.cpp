#include<iostream>
using namespace std;

class Pair
{
	public:
	Pair(int x=0,int y=0){first=x;second=y;};
	friend ostream& operator<<(ostream& output,Pair& in);
	friend Pair operator+=(Pair& a,Pair& b);
	friend Pair operator-=(Pair& a,Pair& b);
	friend Pair operator*=(Pair& a,Pair& b);
	friend Pair operator/=(Pair& a,Pair& b);
	Pair operator++(int q);
	Pair operator++();
	Pair operator--(int q);
	Pair operator--();
	private:
	int first,second;
};
Pair operator+=(Pair& a,Pair& b)
{
	a.first=a.first+b.first;
	a.second=a.second+b.second;
	return a;
}
Pair operator-=(Pair& a,Pair& b)
{
	a.first=a.first-b.first;
	a.second=a.second-b.second;
	return a;
}
Pair operator*=(Pair& a,Pair& b)
{
	int tmp=a.first*b.first-a.second*b.second;
	a.second=a.second*b.first+a.first*b.second;
	a.first=tmp;
	return a;
}
Pair operator/=(Pair& a,Pair& b)
{
	int tmp=(a.first*b.first+a.second*b.second)/(b.first*b.first+b.second*b.second);//a.first
	a.second=(a.second*b.first-a.first*b.second)/(b.first*b.first+b.second*b.second);
	a.first=tmp;
	return a;
}
	Pair Pair::operator--(int q)
{
	int tmp1=first--;
	int tmp2=second--;
	return Pair(tmp1,tmp2);
}
	Pair Pair::operator--()
{
	first--;
	second--;
	return Pair(first,second);
}
	Pair Pair::operator++(int q)
{
	int tmp1=first++;
	int tmp2=second++;
	return Pair(tmp1,tmp2);
}
	Pair Pair::operator++()
{
	first++;
	second++;
	return Pair(first,second);
}
	ostream& operator<<(ostream& output,Pair& in)
{
	output<<"( "<<in.first<<" , "<<in.second<<" )"<<endl;
	return output;
}

int main()
{
	int tmp1,tmp2;
	cout<<"enter A:"<<endl;
	cin>>tmp1>>tmp2;
	Pair A(tmp1,tmp2);
	cout<<"enter B:"<<endl;
	cin>>tmp1>>tmp2;
	Pair B(tmp1,tmp2);
	Pair C;
	cout<<"A\t:"<<A;
	cout<<"B\t:"<<B;
	C=A++;
	cout<<"A++\t:"<<C;
	C=++A;
	cout<<"++A\t:"<<C;
	C=A--;
	cout<<"A--\t:"<<C;
	C=--A;
	cout<<"--A\t:"<<C<<endl;
	A+=B;
	cout<<"A += B:"<<A;
	A-=B;
	cout<<"A -= B:"<<A;
	A*=B;
	cout<<"A *= B:"<<A;
	A/=B;
	cout<<"A /= B:"<<A;
}
