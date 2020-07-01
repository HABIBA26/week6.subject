#pragma once
#include "Person.h"
#include <iostream>
using namespace std;

class Teatcher : public Person
{
private:
	float salary;
	int workHour;
public:
	void set_salary(float s);
	float get_salary();
	void set_workHour(int w);
	int get_workHour();
	void printInfo();
};

