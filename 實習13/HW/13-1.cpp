#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string file;
	int m,i=0;
	double t=0,tmp;
	cout<<"please enter the file name to read temparature from: ";
	cin>>file;
	ifstream f;
	f.open(file+".txt");
	while(f>>tmp)
	{	
		if(tmp>t)
		{
			t=tmp;
			m=i+1;
		}
		i++;
	}

	cout<<"The hotest month : "<<m<<endl;
	cout<<"This temperature is : "<<t<<endl;
}
