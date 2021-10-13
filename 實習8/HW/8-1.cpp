#include<iostream>
using namespace std;

class Date
{
	public:
	Date(int y,int m,int d){year=y;month=m;day=d;};
	int Y() const {return year;}
	int M() const {return month;}
	int D() const {return day;}
	private:
	int year,month,day;
};

bool operator ==(const Date&D1,const Date&D2)
{
	return(D1.Y()*10000+D1.M()*100+D1.D())==(D2.Y()*10000+D2.M()*100+D2.D());
}
bool operator >(const Date&D1,const Date&D2)
{
	return(D1.Y()*10000+D1.M()*100+D1.D())>(D2.Y()*10000+D2.M()*100+D2.D());
}
bool operator <(const Date&D1,const Date&D2)
{
	return(D1.Y()*10000+D1.M()*100+D1.D())<(D2.Y()*10000+D2.M()*100+D2.D());
}
int main()
{
	int y,m,d;
	string s1,s2;
	cout<<"Please enter 3 dates to test:"<<endl;
	cout<<"Enter the date1 : ";
	cin>>y>>m>>d;
	Date D1(y,m,d);
	cout<<"Enter the date2 : ";
	cin>>y>>m>>d;
	Date D2(y,m,d);
	cout<<"Enter the date3 : ";
	cin>>y>>m>>d;
	Date D3(y,m,d);
	cout<<"date1: "<<D1.Y()<<" / "<<D1.M()<<" / "<<D1.D()<<endl;
	cout<<"date2: "<<D2.Y()<<" / "<<D2.M()<<" / "<<D2.D()<<endl;
	cout<<"date3: "<<D3.Y()<<" / "<<D3.M()<<" / "<<D3.D()<<endl;
	cout<<"Choose two dates to compare (> , <, =):";
	cin>>s1>>s2;
	
	if(s1=="date1"&&s2=="date2")
	{
		if(D1>D2)
		cout<<D1.Y()<<" / "<<D1.M()<<" / "<<D1.D()<<" > "<<D2.Y()<<" / "<<D2.M()<<" / "<<D2.D()<<endl;
		if(D1==D2)
		cout<<D1.Y()<<" / "<<D1.M()<<" / "<<D1.D()<<" = "<<D2.Y()<<" / "<<D2.M()<<" / "<<D2.D()<<endl;
		if(D1<D2)
		cout<<D1.Y()<<" / "<<D1.M()<<" / "<<D1.D()<<" < "<<D2.Y()<<" / "<<D2.M()<<" / "<<D2.D()<<endl;
	}

	if(s1=="date1"&&s2=="date3")
	{
		if(D1>D3)
		cout<<D1.Y()<<" / "<<D1.M()<<" / "<<D1.D()<<" > "<<D3.Y()<<" / "<<D3.M()<<" / "<<D3.D()<<endl;
		if(D1==D3)
		cout<<D1.Y()<<" / "<<D1.M()<<" / "<<D1.D()<<" = "<<D3.Y()<<" / "<<D3.M()<<" / "<<D3.D()<<endl;
		if(D1<D3)
		cout<<D1.Y()<<" / "<<D1.M()<<" / "<<D1.D()<<" < "<<D3.Y()<<" / "<<D3.M()<<" / "<<D3.D()<<endl;
	}

	if(s1=="date2"&&s2=="date3")
	{
		if(D2>D3)
		cout<<D2.Y()<<" / "<<D2.M()<<" / "<<D2.D()<<" > "<<D3.Y()<<" / "<<D3.M()<<" / "<<D3.D()<<endl;
		if(D2==D3)
		cout<<D2.Y()<<" / "<<D2.M()<<" / "<<D2.D()<<" = "<<D3.Y()<<" / "<<D3.M()<<" / "<<D3.D()<<endl;
		if(D2<D3)
		cout<<D2.Y()<<" / "<<D2.M()<<" / "<<D2.D()<<" < "<<D3.Y()<<" / "<<D3.M()<<" / "<<D3.D()<<endl;
	}
}


