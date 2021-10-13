#include <iostream>
#include "TwoD.h"
using namespace std;

namespace TD
{
TwoD::TwoD(int row,int col)
{
	mrow = row;
	mcol = col;
	ary = new int*[mrow];
	for(int i = 0 ;i<mrow;i++)ary[i] = new int[mcol];
}
TwoD::~TwoD()
{
	for(int i = 0 ;i<mrow;i++)delete[] ary[i];
	delete[] ary;
}
void TwoD::set(int r,int c,int data)
{
	ary[r][c] = data;
}
int TwoD::get(int r , int c)
{
	return ary[r][c];
}
TwoD operator+(const TwoD& t1,const TwoD& t2)
{
	TwoD tem(t1.mrow,t2.mcol);
	for(int i = 0 ; i<t1.mrow; i++)
	{
		for(int j = 0 ;j < t1.mcol;j++)
			tem.set(i,j,t1.ary[i][j] + t2.ary[i][j]);
	}
	return tem;
}
void TwoD::operator=(const TwoD &t1)
{
	mrow = t1.mrow;
	mcol = t1.mcol;
	ary = new int*[mrow];
	for(int i = 0 ;i<mrow;i++)ary[i] = new int[mcol];
	for(int i=0;i < mrow;i++)
	{
		for(int j = 0;j < mcol;j++)
			set(i,j,t1.ary[i][j]);
	}
}
void TwoD::show(void)
{
	for(int i = 0;i<mrow;i++)
	{
		for(int j = 0;j<mcol;j++)
			cout<<ary[i][j]<<" ";
	cout<<endl;
	}
}
}

