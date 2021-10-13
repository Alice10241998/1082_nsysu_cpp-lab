#include<iostream>
using namespace std;

class money
{
	public:
	int day[7];
	double hour;
	void cal(money a);
};

void money::cal(money a)
{
	for(int i=1;i<8;i++)
	{
		cout<<"Day "<<i<<" :"<<endl;
		cin>>day[i];
	}
	hour=0;
	for(int i=1;i<8;i++)
	{
		if(day[i]<=8)
			hour+=day[i];
		else if(day[i]>8&&day[i]<=10)
			hour+=(day[i]-8)*1.33+8;
		else
			hour+=8+1.33*2+(day[i]-10)*1.66;
	}
	cout<<"Your total working hours : "<<hour<<endl;
	cout<<"Your salary : "<<hour*140<<endl;
}

int main()
{
	money a;
	a.cal(a);
}
