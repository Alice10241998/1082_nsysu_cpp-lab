#include<iostream>
using namespace std;

class Pokemon
{
	//public:
	//Pokemon(string n,string t,int h,int a){name=n;type=t;HP=h;ATK=a;};
	protected:
	string name,type;
	int HP,ATK;
};

class fire: public Pokemon
{
	public:
	fire(string n,int h,int a){name=n;type="fire";HP=h;ATK=a;};
	void print()
	{
		cout<<name<<" Type:"<<type<<" HP:"<<HP<<" ATK:"<<ATK<<endl;
	}

};
class water: public Pokemon
{
	public:
	water(string n,int h,int a){name=n;type="water";HP=h;ATK=a;};
	void print()
	{
		cout<<name<<" Type:"<<type<<" HP:"<<HP<<" ATK:"<<ATK<<endl;
	}

};
class grass: public Pokemon
{
	public:
	grass(string n,int h,int a){name=n;type="grass";HP=h;ATK=a;};
	void print()
	{
		cout<<name<<" Type:"<<type<<" HP:"<<HP<<" ATK:"<<ATK<<endl;
	}

};

int main()
{
	fire Charmander("Charmander",10,3),Charmeleon("Charmeleon",20,7),Charizard("Charizard",40,15);
	water Squirtle("Squirtle",10,3),Wartortle("Wartortle",20,7),Blastoise("Blastoise",40,15);
	grass Bulbasaur("Bulbasaur",10,3),Ivysaur("Ivysaur",20,7),Venusaur("Venusaur",40,15);

	Charmander.print();
	Charmeleon.print();
	Charizard.print();
	Squirtle.print();
	Wartortle.print();
	Blastoise.print();
	Bulbasaur.print();
	Ivysaur.print();
	Venusaur.print();
}

