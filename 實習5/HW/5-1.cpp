#include<iostream>
using namespace std;

struct grade
{
	int score[5]={0},finish=0;
};

int main()
{
	grade g;
	int i;

	cout<<"Initial struct, scores:";
	for(i=0;i<5;i++)
		cout<<g.score[i]<<" ";
	cout<<endl;

	cout<<"Finish intime : "<<g.finish<<endl;

	cout<<"Please key in scores"<<endl;
	g.finish=1;
	for(i=0;i<5;i++)
	{
		cin>>g.score[i];
		if(g.score[i]<=0)
			g.finish=0;

	}

	cout<<"student scores:";
	for(i=0;i<4;i++)
		cout<<g.score[i]<<",";
	cout<<g.score[4]<<endl;
	cout<<"Finish intime : "<<g.finish<<endl;
}
