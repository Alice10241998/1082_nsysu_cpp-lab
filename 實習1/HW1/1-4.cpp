#include<iostream>
#include<math.h>
using namespace std;
int main(void)
{
	int num;
	cout<<"Input your grade: " <<endl;
	cin>>num;
	switch(num)
	{
		case 90:
			cout<<"Congradetulations! You are great." <<endl;
			break;
		case 80:
			cout<<"Congradetulations! You are good." <<endl;
			break;
		case 60:
			cout<<"Congradetulations! You are pass." <<endl;
			break;
		case 40:
		case 50:
			num=sqrt(num)*10;
			if(num>60)
				cout<< "pass" <<endl;
			else
				cout<< "fail" <<endl;
			break;

		default :
			cout<< "Error!" <<endl;
	}

	return 0;
}

