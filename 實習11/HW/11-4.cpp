#include<bits/stdc++.h>
using namespace std;

int** f(int**a,int r,int c,int zero)
{
	srand(time(0));
	int key,count;
	while(1)
	{
		count=0;
		for(int i = 0;i<r;i++)
		{
			for(int j = 0;j<c;j++)
				a[i][j]=0;
		}
		for(key = 0;key<zero;key++)
			a[rand()%r][rand()%c]=rand()%10;
		for(int i = 0;i<r;i++)
		{
			for(int j = 0;j<c;j++)
				if(a[i][j]!=0)count++;
		}
		if(count == zero)break;
	}
	return a;
}
void show(int **a,int r,int c)
{
	for(int i = 0;i<r;i++)
	{
		cout<<"[  ";
		for(int j = 0;j<c;j++)
			cout<<a[i][j]<<"  ";
		cout<<"]"<<endl;
	}
}

int main()
{
	int r,c,zero,i;
	cout<<"Enter total Rows and Columns : ";
	cin>>r>>c;
	int **a=NULL;
	a = new int*[r];
	for(i=0;i<r;i++)a[i] = new int[c];
	cout<<"Enter total non-zero value :";
	cin>>zero;
	a=f(a,r,c,zero);
	show(a,r,c);
	cout<<"(#ROW #COL #Nonzero) : ("<<r<<" "<< c<<" "<< zero <<")"<<endl<<endl;
	cout<<" After compressing ..."<<endl<<endl<<"(Row Col value)\n";
	for(int i = 0;i<r;i++)
	{
		for(int j = 0;j<c;j++)
		{
			if(a[i][j]!=0)
				cout<<"("<<i<<" "<<j<<" "<<a[i][j]<<")"<<endl;	
		}
	}

}
