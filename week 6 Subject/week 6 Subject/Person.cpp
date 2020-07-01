#include "Person.h"

void Person::set_name(string n)
{
	n = name;
}

string Person::get_name()
{
	return name;
}

void Person::set_mopile(string m)
{
	m = mopile;
}

string Person::get_mopile()
{
	return mopile;
}

void Person::set_email(string e)
{
	e = email;
}

string Person::get_email()
{
	return email;
}

void Person::set_address(string d)
{
	d = address;
}

string Person::get_address()
{
	return address;
}

int Person::get_id()
{
	return id;
}

void Person::printInfo()
{
	cout << name;
}

int Person::personCnt = 0;

Person::Person()
{
	personCnt++;
	id = personCnt;
}
