#pragma once
#include "Teatcher.h"
#include "Student.h"
#include <string>

class TA :public Teatcher ,public Student
{
private:
	string researchSubject;
public:
	void set_researchSubject(string r);
	string get_researchSubject();

};

