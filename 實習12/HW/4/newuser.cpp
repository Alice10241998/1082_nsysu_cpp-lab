#include <iostream>
#include "newuser.h"
using namespace std;
using namespace NU;
	void newuser::inputusername(string input){name=input;};
	void newuser::inputpassword(string input){word=input;};
	string newuser::getusername(){return name;};
	string newuser::getpassword(){return word;};
