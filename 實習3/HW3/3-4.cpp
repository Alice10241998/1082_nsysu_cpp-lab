#include<iostream>
using namespace std;

void circle_area(int num,char m,int &area)
{
	if(m=='r')
		area=3*num*num;
	if(m=='d')
		area=3*(num/2)*(num/2);
}

void circle_perimeter(int num,char m,int &per)
{
	if(m=='r')
		per=2*3*num;
	if(m=='d')
		per=2*3*(num/2);
}

int main()
{
	int num,area,per;
	char m;
	cout <<"Enter the circle diameter:" <<endl;
	cin >>num;
	cout <<"Enter r if the diameter was radius or enter d if it was full diameter: ";
	cin >>m;
	circle_area(num,m,area);
	cout<<"area of the circle is: "<<area<<endl;
	circle_perimeter(num,m,per);
	cout<<"area of the circle is: "<<per<<endl;
}
