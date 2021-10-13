#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> grade;
	int g,i;
	int A[11]={0};	
	cout<<"Enter each grade and then -1 to stop:"<<endl;
	while(1)
	{
		cin>>g;
		if(g==-1) break;
		grade.push_back(g);
		A[g/10]++;
	}
	for(i=0;i<10;i++)
	{
		cout<<A[i]<<" grade(s) of [ "<<i*10<<" , "<<i*10+9<<" ]"<<endl;
	}
	cout<<A[i]<<" grade(s) of 100"<<endl;
}
