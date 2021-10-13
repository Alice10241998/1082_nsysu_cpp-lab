#include<iostream>
using namespace std;

class ATMCard
{
	public:
	ATMCard(int p,int b){password=p;balance=b;};
	int getpassword(){return password;};
	int getbalance(){return balance;};
	void setbalance(int save){balance=save;};
	private:
	int password,balance;
};

class ATM
{
	public:
	void login(ATMCard *a,ATMCard *b);
	void save(ATMCard *card)
	{
		int money;
		cout<<"Enter how much money you want to deposit: ";
		cin>>money;
		card->setbalance(money+card->getbalance());
		cout<<card->getbalance()<<endl;
	}
	void withdraw(ATMCard *card)
	{
		int money;
		cout<<"Enter how much money you want to take out: ";
		cin>>money;
		if(card->getbalance()<money)
		{
			cout<<"no enough money!"<<endl;
			return;
		}
		else
			card->setbalance(card->getbalance()-money);
	}
	void check(ATMCard *card)
	{
		cout<<card->getbalance()<<endl;
	}

};

void ATM::login(ATMCard *a,ATMCard *b)
{
		int password,input=0;
		cout<<"Please enter your card password: ";
		cin>>password;
		if(a->getpassword()==password)
		{	
			cout<<"Login!"<<endl;
			while(input!=-1)
			{
				cout<<"Enter 1 to save money"<<endl
				<<"Enter 2 to withdraw money"<<endl
				<<"Enter 3 to check balances"<<endl
				<<"Enter -1 to end your action"<<endl;
				cin>>input;
				if(input==1) save(a);
				if(input==2) withdraw(a);
				if(input==3) check(a);
			}
			cout<<"Logout"<<endl;
		}
		else if(b->getpassword()==password)
		{
			cout<<"Login!"<<endl;
			while(input!=-1)
			{
				cout<<"Enter 1 to save money"<<endl
				<<"Enter 2 to withdraw money"<<endl
				<<"Enter 3 to check balances"<<endl
				<<"Enter -1 to end your action"<<endl;
				cin>>input;
				if(input==1) save(b);
				if(input==2) withdraw(b);
				if(input==3) check(b);
			}
			cout<<"Logout"<<endl;
		}
		else
		{
			cout<<"No login!"<<endl;
			return;
		}
	}

int main()
{
	ATMCard a(0000,0);
	ATMCard b(1111,1000);
	ATM atm;
	for(int i=0;i<2;i++)
		atm.login(&a,&b);
}
