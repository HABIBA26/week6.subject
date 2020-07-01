#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string name, mopile, email,address;
	int id;
	static int personCnt;
public:
	void set_name(string n);
	string get_name();
	void set_mopile(string m);
	string get_mopile();
	void set_email(string e);
	string get_email();
	void set_address(string d);
	string get_address();
	int get_id();
	void printInfo();
	Person();
};

