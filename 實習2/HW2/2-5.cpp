#include<iostream>
using namespace std;
int p1=0,p2=0;
int main()
{
	char A,B,input;
	do
	{
		cout<<"Please enter either R)ock, P)aper, or S)cissors." <<endl;
		cin >>A;
		cout<<"Please enter either R)ock, P)aper, or S)cissors." <<endl;
		cin >>B;
		switch(A)
		{
			case'P':
			if(B=='P')
				cout<<"No winner." <<endl;
			else if(B=='R')
			{
				cout<<"player 1 wins." <<endl;
				p1++;
			}
			else
			{
				cout<<"player 2 wins." <<endl;
				p2++;
			}
			break;

			case'R':
			if(B=='P')
			{
				cout<<"player 2 wins." <<endl;
				p2++;
			}			
			else if(B=='R')
				cout<<"No winner." <<endl;
			else
			{
				cout<<"player 1 wins." <<endl;
				p1++;
			}
			break;

			case'S':
			if(B=='P')
			{
				cout<<"player 1 wins." <<endl;
				p1++;
			}			
			else if(B=='R')
			{
				cout<<"player 2 wins." <<endl;
				p2++;
			}
			else
				cout<<"No winner." <<endl;
			break;

		}
		cout<<"Totals to this move:"<<endl;
		cout<<"Player 1: "<<p1<<endl;
		cout<<"Player 2: "<<p2<<endl;

		cout<<"Play again? Y/y continues, other quits.";
		cin >>input;
		cout<<"Thanks" <<endl;
	}
	while(input=='y'||input=='Y');
}
