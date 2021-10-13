#include<iostream>
using namespace std;

class Date
{
	public:
	Date(int y,int m,int d){year=y;month=m;day=d;};
	int Y() const {return year;}
	int M() const {return month;}
	int D() const {return day;}
	void sy(int y){year=y;}
	void sm(int m){month=m;}
	void sd(int d){day=d;}
	private:
	int year,month,day;
};

const Date operator+(Date &a,int &n)
{
	a.sd(a.D()+n);
	switch(a.M())
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		if(a.D()<31) break;
		a.sm(a.M()+1);a.sd(a.D()-31);
		if(a.M()>12)
		{
			a.sy(a.Y()+1);
			a.sm(a.M()-12);
		}
		break;
		
		case 4:
		case 6:
		case 9:
		case 11:
		if(a.D()<30) break;
		a.sm(a.M()+1);a.sd(a.D()-30);
		if(a.M()>12)
		{
			a.sy(a.Y()+1);
			a.sm(a.M()-12);
		}
		break;
		case 2:
		if(a.D()<28) break;
		a.sm(a.M()+1);a.sd(a.D()-28);
		if(a.M()>12)
		{
			a.sy(a.Y()+1);
			a.sm(a.M()-12);
		}
		break;
	}
	
}
int main()
{
	int y,m,d,n;
	string s;
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
	cout<<"Choose a dates to add (+):";
	cin>>s;
	cout<<" + ";
	cin>>n;
	if(s=="date1")
	{
		D1+n;
		cout<<D1.Y()<<" / "<<D1.M()<<" / "<<D1.D()<<endl;
	}
	if(s=="date2")
	{
		D2+n;
		cout<<D2.Y()<<" / "<<D2.M()<<" / "<<D2.D()<<endl;
	}
	if(s=="date3")
	{
		D3+n;
		cout<<D3.Y()<<" / "<<D3.M()<<" / "<<D3.D()<<endl;
	}
}
