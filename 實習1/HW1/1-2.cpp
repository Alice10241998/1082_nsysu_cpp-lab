#include<iostream>
using namespace std;
int main(void)
{
	int i,j,num=0;

	for(i=3;i<=1000;i++)
	{
		int k=0;
		for(j=2;j<i;j++)
			if(i%j==0)
			k++;
	
		if(k==0)
		{
			if(i<=100)
			cout <<i  <<" " <<"is a prime number." <<endl;
			num++;
		}
	}

	cout << "There are " << num <<" prime numbers between 3 and 1000." <<endl;
	return 0;

}

