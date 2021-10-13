#include<iostream>
using namespace std;

void str_print(string s,int len=1)
{
	if(len==1)
		cout <<"Output : " <<s <<"!" <<endl;
	else if(len<5&&len>1)
		cout <<"Output : " <<s <<"*" <<endl;
	else
		cout <<"Output : " <<s <<"~" <<endl;
}
int main()
{
	string s;
	cout <<"Enter your string:" <<endl;
	cin >>s;
	str_print(s);
	str_print(s,s.length());

}
