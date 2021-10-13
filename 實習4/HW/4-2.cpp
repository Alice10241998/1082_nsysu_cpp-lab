#include<iostream>
using namespace std;

int main()
{
	int i,j,row,col;
	char seat[10][10];

	for(i=0;i<10;i++)	
	{	
		for(j=0;j<10;j++)
			seat[i][j]=' ';
		
	}
	
	seat[0][0]=seat[0][1]=seat[0][8]=seat[0][9]
	=seat[1][0]=seat[1][1]=seat[1][8]=seat[1][9]
	=seat[8][0]=seat[8][9]=seat[9][0]=seat[9][1]
	=seat[9][8]=seat[9][9]=seat[8][1]=seat[8][8]='x';

	for(i=0;i<10;i++)	
	{	
		for(j=0;j<10;j++)
			cout<<seat[i][j]<<' ';
		cout<<endl;
	}

	while(1)
	{	
		cout<<"row:";
		cin>>row;
		if(row<0)
		{
			cout<<"end of system" <<endl;
			break;
		}
		cout<<"col:";
		cin>>col;
		
		if(seat[row][col]==' ')
		{
			seat[row][col]='o';
			for(i=0;i<10;i++)	
			{	
				for(j=0;j<10;j++)
				cout<<seat[i][j]<<' ';
			cout<<endl;
			}		
		}
		else
			cout<<"Booking Error"<<endl;
	}	
}
