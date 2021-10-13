#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char q[11],m[11];
	int grade=0,i=0;
	cout<<"Start reading true answers and your answers ......\n";
	cout<<"Question answer is :";
	fstream qfile;
	qfile.open("TrueAnswer.txt");
	while(!qfile.eof())
	{	
		char tmp1;
		qfile>>tmp1;
		q[i]=tmp1;
		i++;
	}
	for(i=0;i<10;i++)
		cout<<q[i]<<" ";
	cout<<endl;

	qfile.close();
	i=0;
	cout<<"Your answer is :";
	fstream mfile;
	mfile.open("MyAnswer.txt");
	while(!mfile.eof())
	{	
		char tmp2;
		mfile>>tmp2;
		m[i]=tmp2;
		i++;
	}
	for(i=0;i<10;i++)
		cout<<m[i]<<" ";
	cout<<endl;

	cout<<"Calculating your score ......\n";
	for(i=0;i<10;i++)
	{
		if(q[i]==m[i])
			grade+=10;
	}
	cout<<"Your score is : "<<grade<<endl;
}
