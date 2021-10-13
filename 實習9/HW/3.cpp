#include<bits/stdc++.h>
using namespace std;

class PPP{
public:
	friend ostream& operator<<(ostream &s,PPP &d1);
	friend istream& operator>>(istream &s,PPP &d1);
	friend PPP& operator++(PPP &d1);
	friend PPP operator++(PPP &d1,int i);
	friend PPP& operator--(PPP &d1);
	friend PPP operator--(PPP &d1,int i);
	PPP& operator+=(PPP &d1){ 
		this->first += d1.first;
		this->second += d1.second;
		return *this;
	};
	PPP& operator-=(PPP &d1){ 
		this->first -= d1.first;
		this->second -= d1.second;
		return *this;
	};
	PPP& operator*=(PPP &d1){ 
		int x1=this->first;
		int y1=this->second;
		int x2=d1.first;
		int y2=d1.second;
		this->first = x1*x2-y1*y2;
		this->second = y1*x2+x1*y2;
		return *this;
	};
	PPP& operator/=(PPP &d1){ 
		int x1=this->first;
		int y1=this->second;
		int x2=d1.first;
		int y2=d1.second;
		this->first = (x1*x2+y1*y2)/(x2*x2+y2*y2);
		this->second = (y1*x2-x1*y2)/(x2*x2+y2*y2);
		return *this;
	};


	PPP(){};
	PPP(int f,int s):first(f),second(s){};
private:
	int first{0};
	int second{0};
};
ostream& operator<<(ostream &s,PPP &d1){
	s<<"("<<d1.first<<","<<d1.second<<")";
	return s;
}
istream& operator>>(istream &s,PPP &d1){
	s>>d1.first>>d1.second;
	return s;
}
PPP& operator++(PPP &d1){
	d1.first++;
	d1.second++;
	return d1;
}
PPP operator++(PPP &d1,int i){
	PPP d3(d1.first++,d1.second++);
	return d3;
}

PPP& operator--(PPP &d1){
	d1.first--;
	d1.second--;
	return d1;
}
PPP operator--(PPP &d1,int i){
	PPP d3(d1.first--,d1.second--);
	return d3;
}

int main(){
	int a,b;
	cout<<"pair A:";
	cin>>a>>b;
	PPP A(a,b);
	cout<<"pair B:";
	cin>>a>>b;
	PPP B(a,b);
	cout<<"A = "<<A<<endl;
	cout<<"B = "<<B<<endl;
	PPP C(0,0);
	C=A++;
	cout<<"A++:"<<C<<endl;
	cout<<"++A:"<<++A<<endl;
	C=A--;
	cout<<"A--:"<<C<<endl;
	cout<<"--A:"<<--A<<endl;
	cout<<endl;
	A+=B;
	cout<<"A += B:"<<A;
	cout<<endl;
	A-=B;
	cout<<"A -= B:"<<A;
	cout<<endl;
	A*=B;
	cout<<"A *= B:"<<A;
	cout<<endl;
	A/=B;
	cout<<"A /= B:"<<A;
	cout<<endl;
}
