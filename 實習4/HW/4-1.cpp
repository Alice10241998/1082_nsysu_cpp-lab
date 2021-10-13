#include<iostream>
using namespace std;

int f(int input)
{
	int output=0;
	while(input!=0)
	{
		output=output*10+input%10;
		input/=10;	
	}
		return output;
}


int main()
{
	int input,output,i=0;
	cin >>input;
	while(f(input)!=input)
	{
		output=f(input);
		input+=output;
		i++;	
	}
	cout<< i <<" " <<input <<endl;
}
