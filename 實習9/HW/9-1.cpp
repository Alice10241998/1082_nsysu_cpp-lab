#include<iostream>
using namespace std;

class date
{
	public:
	friend ostream& operator << (ostream& output,date& in);
	friend istream& operator >> (istream& input,date& in);
	private:
	int year,month,day;
};

istream& operator >>(istream& input, date& in)
{
	int y,m,d;
	cout<<"istream overload ......"<<endl<<"Please enter year :"<<endl;
	input>>y;
	cout<<"Please enter month :"<<endl;
	input>>m;
	cout<<"Please enter day :"<<endl;
	input>>d;
	
	in.year=y;
	in.month=m;
	in.day=d;

	return input;
}

ostream& operator <<(ostream& output, date& in)
{
	cout<<"ostream overload ......"<<endl<<"Date :"<<endl;
	output<<in.year<<" / "<<in.month<<" / "<<in.day<<endl;

	return output;
}

int main()
{
	date d1;
	cin>>d1;
	cout<<d1;
}
