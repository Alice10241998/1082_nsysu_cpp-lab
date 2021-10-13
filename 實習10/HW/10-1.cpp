#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string s;
	char c;
	char w[s.length()+1];

	while(1)
	{
		cout<<"Enter a number (Startung with '0' or '-' means exit) : ";
		c=cin.peek();
		if(c=='0'||c=='-')
			break;
		cin>>s;
		cin.get();
		strcpy(w,s.c_str());
		cout<<"Inverse string : ";
		for(int i=s.length();i>=0;i--)
			cout<<w[i];
		cout<<endl;
	}
}
