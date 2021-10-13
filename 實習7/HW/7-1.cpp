#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

class A
{
	public:
		A(double n){ans=n;};
		double get(){return ans;};
		void set(double temp){ans=temp;};
	private:
		double ans;
};

class B
{
	public:
		B(double temp,double n,string ans);
		double cal();
	private:
		double a,b;
		string s;
};
B::B(double temp,double n,string ans):a(temp),b(n),s(ans){}

double B::cal()
{
	switch(s[0])
	{
		case'+': a+=b;break;
		case'-': a-=b;break;
		case'*': a*=b;break;
		case'/': a/=b;break;
		case'^': a=pow(a,b);break;
		case'%': a=(int)a%(int)b;break;
	}
	return a;
}

int main()
{
	string ans;
	double n,temp;
	cin>>n;
	A a(n);
	while(cin>>ans)
	{
		if(ans!="EOF")
		{
			cin>>n;
			temp=a.get();
			B b(temp,n,ans);
			temp=b.cal();
			a.set(temp);
		}
		else break;
	}
	cout<<fixed<<setprecision(6)<<a.get()<<endl;
}
