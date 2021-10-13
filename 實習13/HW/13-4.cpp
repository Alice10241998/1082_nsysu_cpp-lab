#include<iostream>
using namespace std;

class circle
{
	public:
	circle(){r=0;}
	circle(int rr){r = rr;}
	void out()
	{
		cout<<"r="<<r<<",area="<<r*r*3.14<<endl;	
	}
	protected:
	int r;
};
class cylinder:public circle
{
	public:
	cylinder()
	{
		circle(0);
		h=0;
	}
	cylinder(int rr,int hh):circle(rr),h(hh){}
	void out(void)
	{
		cout<<"r="<<r<<",volume="<<r*r*3.14*h<<endl;	
	}
	protected:
	int h;
};

int main()
{
	int r,h;
	cout<<"Type the radius:";
	cin>>r;
	circle c(r);
	c.out();
	cout<<"Type the height:";
	cin>>h;
	cylinder cc(r,h);
	cc.out();
}
