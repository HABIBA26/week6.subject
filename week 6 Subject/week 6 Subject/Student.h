#pragma once
#include "Person.h"
class Student : public virtual Person
{
private:
	int grade;
	double gpa;
public:
	void set_grade(int g);
	int get_grade();
	void set_gpa(double p);
	double get_gpa();
	void displayInfo();

};

