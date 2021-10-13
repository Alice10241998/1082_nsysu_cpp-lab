#include<iostream>
using namespace std;

class node
{
	public:
	friend class stack;
	private:
	int data;
	node* next;
};

class stack
{
	public:
	stack(){first=NULL;last=NULL;};
	void push(int n);
	void pop();
	void print();
	private:
	node *first,*last;
};
void stack::push(int n)
{
	if(first==NULL)
	{
		node *tmp=new node;
		first=tmp;
		last=tmp;
		tmp->data=n;
		tmp->next=NULL;
	}
	else
	{
		node *tmp=new node;
		last->next=tmp;
		last=tmp;
		tmp->data=n;
		tmp->next=NULL;
	}
}
void stack::pop()
{
	if(first==last)
	{
		delete first;
		first=NULL;
		last=NULL;
	}
	else
	{
		node *i,*here;
		for(i=first;i!=last;i=i->next)
			here=i;
		delete last;
		last=here;
		here->next=NULL;
	}
}
void stack::print()
{
	if(first==NULL)
		cout<<"Stack is empty\n";
	else
	{
		cout<<"In stack: ";
		node *i;
		for(i=first;i!=NULL;i=i->next)
			cout<<i->data<<" ";
		cout<<endl;
	}
}

int main()
{
	stack s;
	int input,n;
	while(1)
	{
		cout<<"1 for push in stack, 2 for pop out from stack, 3 for exit:\n";
		cin>>input;
		if(input==1)
		{
			cout<<"Enter a number:\n";
			cin>>n;
			s.push(n);
			s.print();
		}		
		else if(input==2)
		{
			s.pop();
			s.print();
		}
		else if(input==3)
			break;
	}
}
