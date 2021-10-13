#include<iostream>
using namespace std;

int main()
{
	srand(time(NULL));
	int i;
	for(i=0;i<10;i++)
		cout << char((rand()%26)+65) <<endl;
	return 0;
}
