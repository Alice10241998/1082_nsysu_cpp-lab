#include<iostream>
using namespace std;

struct point
{
	int x,y;
};

struct line
{
	point A,B;
};

int main()
{
	line AB,CD;
	cout<<"A"<<endl;
	cin>>AB.A.x>>AB.A.y;
	cout<<"B"<<endl;
	cin>>AB.B.x>>AB.B.y;
	cout<<"C"<<endl;
	cin>>CD.A.x>>CD.A.y;
	cout<<"D"<<endl;
	cin>>CD.B.x>>CD.B.y;

	int AB_lx,AB_ly,CD_lx,CD_ly;
	
	AB_lx=AB.A.x-AB.B.x;
	AB_ly=AB.A.y-AB.B.y;
	CD_lx=CD.A.x-CD.B.x;
	CD_ly=CD.A.y-CD.B.y;
	if(((AB_lx*CD_lx)-(AB_ly*CD_ly))==0)
		cout<<"vertical"<<endl;
	else
		cout<<"not vertical"<<endl;

}
