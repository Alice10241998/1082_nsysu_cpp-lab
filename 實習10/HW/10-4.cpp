#include<iostream>
using namespace std;

int main()
{
	int r,c,i,j;
	cout<<"Please enter the number of rows and columns :"<<endl;
	cin>>r>>c;
	int A[r][c];
	int **B=NULL;
	B=new int *[r];
	for(i=0;i<r;i++)
		B[i]=new int [c];

	cout<<"Please enter all elements :"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>A[i][j];
			B[i][j]=A[i][j];
		}
	}
	cout<<"2d array address(General method) :"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cout<<A[i][j]<<"@ "<<&A[i][j]<<endl;
	}
	cout<<endl;
	cout<<"2d array address(Pointer's method) :"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cout<<B[i][j]<<"@ "<<&B[i][j]<<endl;
	}
}
