#include<iostream>
#include<vector>
using namespace std;

class Pokemon
{
	public:
	void set(string n,string t,int h,int a){name=n;type=t;HP=h;ATK=a;};
	void print(){cout<<name<<" Type:"<<type<<" HP:"<<HP<<" ATK:"<<ATK<<endl;};
	void fight(Pokemon p);
	protected:
	string name,type;
	int HP,ATK,num;
};

class Fire: public Pokemon
{
	public:
	Fire(string n,int h,int a){name=n;type="fire";HP=h;ATK=a;};
};
class Water: public Pokemon
{
	public:
	Water(string n,int h,int a){name=n;type="water";HP=h;ATK=a;};
};
class Grass: public Pokemon
{
	public:
	Grass(string n,int h,int a){name=n;type="grass";HP=h;ATK=a;};
};

void Pokemon::fight(Pokemon p)
{
	for(int i=0;;i++)
	{
		if(HP<0||p.HP<0)
		{
			cout<<"dead\n";
			break;
		}
		if(i%2==0)
		{
			cout<<name<<" atk >> "<<p.name<<endl;
			if((type=="water"&&p.type=="fire")||(type=="fire"&&p.type=="grass")||(type=="grass"&&p.type=="water"))
				p.HP=p.HP-2*ATK;
			else
				p.HP=p.HP-ATK;
			cout<<"remain HP "<<p.HP<<endl;
		}
		if(i%2==1)
		{
			cout<<p.name<<" atk >> "<<name<<endl;
			if((p.type=="water"&&type=="fire")||(p.type=="fire"&&type=="grass")||(p.type=="grass"&&type=="water"))
				HP=HP-2*p.ATK;
			else
				HP=HP-p.ATK;
			cout<<"remain HP "<<HP<<endl;
		}
	}
}

int main()
{
	vector<Pokemon> a;
	Pokemon t;
	t.set("Charmander","fire",10,3);
	a.push_back(t);
	t.set("Charmeleon","fire",20,7);
	a.push_back(t);
	t.set("Charizard","fire",40,15);
	a.push_back(t);
	t.set("Squirtle","water",10,3);
	a.push_back(t);
	t.set("Wartortle","water",20,7);
	a.push_back(t);
	t.set("Blastoise","water",40,15);
	a.push_back(t);
	t.set("Bulbasaur","grass",10,3);
	a.push_back(t);
	t.set("Ivysaur","grass",20,7);
	a.push_back(t);
	t.set("Venusaur","grass",40,15);
	a.push_back(t);

	for(int i=0;i<a.size();i++)
		a[i].print();

	int m1,m2;
	cout<<"Please enter two pokemons' number:"<<endl;
	cin>>m1>>m2;
	a[m1].fight(a[m2]);

}
