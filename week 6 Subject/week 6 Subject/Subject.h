#pragma once
#include <iostream>
#include <string>
using namespace std;

class Subject
{
private:
	string name;
	int fullMark, studentMark;
public:
	void set_name(string n);
	string get_name();
	void set_fullMark(int fm);
	int get_fullMark();
	void set_studentMark(int sm);
	int get_studentMark();
	Subject operator+(Subject s2);
	Subject();
	Subject(string n, int fm, int sm);
};

