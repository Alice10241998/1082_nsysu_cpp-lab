#include<iostream>
using namespace std;

struct Grade
{
	int score[5],finish=0;
	double avg_element(Grade grade);
	double min_element(Grade grade);
	double max_element(Grade grade);
};

double Grade::avg_element(Grade grade)
{
	int i;
	double sum=0;
	for(i=0;i<5;i++)
		sum+=grade.score[i];
	return sum/5;
}

double Grade::min_element(Grade grade)
{
	int i;
	double min=1000;
	for(i=0;i<5;i++)
		if(grade.score[i]<min)
			min=grade.score[i];
	return min;
}

double Grade::max_element(Grade grade)
{
	int i;
	double max=-1000;
	for(i=0;i<5;i++)
		if(grade.score[i]>max)
			max=grade.score[i];
	return max;
}

int main()
{
	Grade g;
	int i; 
	cout<<"Please key in scores:"<<endl;
	
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

	
	cout<<"Average : "<<g.avg_element(g)<<" , Max : "<<g.max_element(g)<<" , Min : "<<g.min_element(g)<<endl;
}
