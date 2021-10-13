#include<iostream>
using namespace std;
int r=1;
char n[9];

void chess1()
{
	int i;
	for(i=0;i<=9;i++)
	{
		cout<<n[i]<<" ";
		if(i%3==2)
			cout<<endl;
	}
	cout<<endl;
}

int chess2()
{
	if(n[0]=='O'&&n[1]=='O'&&n[2]=='O'){cout<<"You win!"<<endl;return 1;}
	if(n[4]=='O'&&n[5]=='O'&&n[6]=='O'){cout<<"You win!"<<endl;return 1;}
	if(n[7]=='O'&&n[8]=='O'&&n[9]=='O'){cout<<"You win!"<<endl;return 1;}
	if(n[0]=='O'&&n[3]=='O'&&n[6]=='O'){cout<<"You win!"<<endl;return 1;}
	if(n[1]=='O'&&n[4]=='O'&&n[7]=='O'){cout<<"You win!"<<endl;return 1;}
	if(n[2]=='O'&&n[5]=='O'&&n[8]=='O'){cout<<"You win!"<<endl;return 1;}
	if(n[0]=='O'&&n[4]=='O'&&n[8]=='O'){cout<<"You win!"<<endl;return 1;}
	if(n[2]=='O'&&n[4]=='O'&&n[6]=='O'){cout<<"You win!"<<endl;return 1;}

	if(n[0]=='X'&&n[1]=='X'&&n[2]=='X'){cout<<"You lose!"<<endl;return 1;}
	if(n[4]=='X'&&n[5]=='X'&&n[6]=='X'){cout<<"You lose!"<<endl;return 1;}
	if(n[7]=='X'&&n[8]=='X'&&n[9]=='X'){cout<<"You lose!"<<endl;return 1;}
	if(n[0]=='X'&&n[3]=='X'&&n[6]=='X'){cout<<"You lose!"<<endl;return 1;}
	if(n[1]=='X'&&n[4]=='X'&&n[7]=='X'){cout<<"You lose!"<<endl;return 1;}
	if(n[2]=='X'&&n[5]=='X'&&n[8]=='X'){cout<<"You lose!"<<endl;return 1;}
	if(n[0]=='X'&&n[4]=='X'&&n[8]=='X'){cout<<"You lose!"<<endl;return 1;}
	if(n[2]=='X'&&n[4]=='X'&&n[6]=='X'){cout<<"You lose!"<<endl;return 1;}

	if(r==4){cout<<"draw"<<endl;return 1;}
	return 0;
}

int play1(int s)
{
	if(n[s]!='O'&&n[s]!='X')
	{
		n[s]='O';
		return 0;
	}
	else return 1;
}

void play2()
{
	srand(time(0));
	while(1)
	{
		int a=rand()%9;
		if(n[a]!='O'&&n[a]!='X')
		{n[a]='X';break;}
	}
}

int main()
{
	int i,s,a=0;
	for(i=0;i<9;i++)
		n[i]=(char)(i+'0');
	chess1();
	while(1)
	{
		cout<<"Round:"<<r<<endl<<"player:";
		cin>>s;
		if(play1(s))continue;
		a=chess2();
		if(a)break;
		play2();
		a=chess2();
		if(a)break;
		else chess1();
r++;}
}
