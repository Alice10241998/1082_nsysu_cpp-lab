#include<iostream>
#include<fstream>
#include<ctime>
using namespace std;

void write(int input,int a[])
{
	fstream file;
	file.open("MyLottery.txt",ios::out|ios::app);
	string s1,s2;
	s1="Your lottery (random) : ";
	s2="Your lottery (choose) : ";
	if(input==1)
		file<<s1;
	if(input==2)
		file<<s2;
	for(int i=0;i<53;i++)
		if(a[i]!=0)
			file<<i<<" ";
	file<<endl;
}

int main()
{
	int input,i,temp;
	int a[53]={0};

	cout<<"Welcome to lottery system !"<<endl;
	while(1)
	{
		for(i=0;i<53;i++)
			a[i]=0;
		cout<<"1 for random number, 2 for choosing your own number, -1 for exiting";
		cin>>input;		
		if(input==-1) break;
		if(input==1)
		{	
			for(i=0;i<6;i++)
			{
				int r=rand()%52+1;
				if(a[r]==0)
					a[r]++;
				else
					i--;
			}
			cout<<"Your random number is : ";
			for(i=1;i<53;i++)
			{
				if(a[i]!=0)
					cout<<i<<" ";
			}
			cout<<endl;
			write(input,a);
		}
		if(input==2)
		{
			for(i=0;i<6;i++)
			{
				cout<<"Please enter number "<<i+1<<endl;
				cin>>temp;
				if(temp>52||temp<1||a[temp]!=0)
				{
					cout<<"You can only choose 1~52."<<endl;
					i--;
				}
				else
					a[temp]++;
			}
		cout<<"Your number is : ";
		for(i=1;i<53;i++)
		{
			if(a[i]!=0)
				cout<<i<<" ";
		}
			cout<<endl;
			write(input,a);
		}
	}	
}
