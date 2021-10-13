#include<iostream>
using namespace std;

int main()
{
	int player1=0,player2=0;
	char A,B,input='y';
	while(input=='y'||input=='Y')
	{
		cout<<"Please enter either R)ock, P)aper, or S)cissors." <<endl;
		cin >>A;
		cout<<"Please enter either R)ock, P)aper, or S)cissors." <<endl;
		cin >>B;
		
	if(A==B)
		cout<<"No winner." <<endl;
	else if((A=='P'&&B=='R')||(A=='R'&&B=='S')||(A=='S'&&B=='P'))
		{
			cout<<"player 1 wins." <<endl;
			player1++;
		}
	else
		{
			cout<<"player 2 wins." <<endl;
			player2++;
		}

	cout<<"Totals to this move:"<<endl;
	cout<<"Player 1: "<<player1<<endl;
	cout<<"Player 2: "<<player2<<endl;

	cout<<"Play again? Y/y continues, other quits.";
	cin >>input;
	cout<<"Thanks" <<endl;
	}
}
