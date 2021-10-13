#include<iostream>
using namespace std;

int month[12]={0,0,31,59,90,120,151,181,212,242,273,303};

class Date
{
	public:
	Date(int y,int m,int d){year=y;month=m;day=d;};
	int Y() {return year;}
	int M() {return month;}
	int D() {return day;}
	private:
	int year,month,day;
};

int operator-(Date &a,Date &b)
{
	int ya,yb,ma,mb,da,db;
	ya=a.Y();
	ma=a.M();
	da=a.D();
	yb=b.Y();
	mb=b.M();
	db=b.D();
	int d1,d2;
	d1=365*ya+month[ma]+da;
	d2=365*yb+month[mb]+db;
	return d1-d2;
}
int main()
{
	int y,m,d;
	cout<<"Please enter 2 dates to test:"<<endl;
	cout<<"Enter the date1 : ";
	cin>>y>>m>>d;
	Date D1(y,m,d);
	cout<<"Enter the date2 : ";
	cin>>y>>m>>d;
	Date D2(y,m,d);
	int dif=D1-D2;
	cout<<"From "<<D1.Y()<<" / "<<D1.M()<<" / "<<D1.D()<<" to "<<D2.Y()<<" / "<<D2.M()<<" / "<<D2.D()<<": "<<dif<<" days"<<endl;
}
