#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

class Character
{
	public:
	Character(string n,int l) //預設好角色名稱及等級
	{
		name=n;
		level=l;
		exp=100*pow(l-1,2);
	}
	virtual void print(){cout<<name<<": Level "<<level<<"("<<exp<<"/"<<100*pow(level,2)<<")"<<endl;}; //印出所需資訊→ name: Level N (目前exp/升等所需exp)
	string getName(){return name;}; //回傳角色名
	int getlevel(){return level;};
	int getexp(){return exp;};
	void beatMonster(int input) //獲得打怪獲得的exp
	{
		while(1)
		{
			if(exp+input<100*pow(level,2))
			{
				exp+=input;
				break;
			}
			else
			{
				input=input-(100*pow(level,2)-100*pow(level-1,2));
				levelUp();
			} 
		}
	}
	void levelUp() //等級提升
	{
		level++;
		exp=100*pow(level-1,2);
	}

	private:
	static const int EXP_LV = 100; //算經驗值的常數 
	string name; //角色名稱
	int level; //等級
	int exp; //經驗值

};
class Knight:public Character
{
	public:
	Knight(string n,int l):Character(n,l){};
	void print() override
	{
		cout<<"Knight "<<getName()<<": Level "<<getlevel()<<"("<<getexp()<<"/"<<100*pow(getlevel(),2)<<")"<<endl;
	}
};
class Warrior:public Character
{
	public:
	Warrior(string n,int l):Character(n,l){};
	void print() override
	{
		cout<<"Warrior "<<getName()<<": Level "<<getlevel()<<"("<<getexp()<<"/"<<100*pow(getlevel(),2)<<")"<<endl;
	}
};

int main()
{
	Character* c[3];
	c[0] = new Knight("Leo",10);
	c[1] = new Knight("Tsukasa",8);
	c[2] = new Warrior("Rose",12);
	c[0]->print();
	c[1]->print();
	c[2]->print();

	c[2]->beatMonster(10000); 
	cout<<"Rose best the monster."<<endl;
	
	c[0]->print();
	c[1]->print();
	c[2]->print();

}


