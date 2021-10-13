#include<bits/stdc++.h>
using namespace std;
vector<string>s;

void show(string a[],int size)
{
	for(int i=0;i<size;i++)
		cout<<" "<<i<<": "<<a[i]<<endl;	
}
string* add(string a[],int& size,string s)
{
	int i;
	size++;
	string *b;
	b = new string[size];
	for(i=0;i<size-1;i++)
		b[i]=a[i];
	b[i]=s;
	return b;
}
string* del(string a[],int& size,string s)
{
	int i,key=0,j=0;
	string *b;
	b=new string[size];
	for(i=0;i<size;i++)	
	{
		if(a[i]!=s)b[j++]=a[i];
		else key=1;
	}
	if(key){size--;return b;}
	else {cout<<"The name isn't on the list\n";return a;}
}

int main()
{
	string *a;
	int size=5;
	a=new string[size];	
	a[0]="Frink";
	a[1]="Wiggum";
	a[2]="Allen";
	a[3]="Quimby";
	a[4]="Flandes";
	string f;
	cout<<"Initial list:\n";
	show(a,size);
	while(1){
		cout<<"Please enter add , delete or exit :\n";
		cin>>f;
		if(f=="add"){
			cout<<"Please enter a name :\n";
			cin>>f;
			a=add(a,size,f);
		}
		else if (f == "delete"){
			cout<<"Please choose a name :\n";
			cin>>f;
			a=del(a,size,f);
		}
		else if (f=="exit")break;
		cout<<"After the adding a name :\n";
		show(a,size);
	}
}
