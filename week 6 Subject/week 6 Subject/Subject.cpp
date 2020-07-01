#include "Subject.h"

void Subject::set_name(string n)
{
	n = name;
}

string Subject::get_name()
{
	return name;
}

void Subject::set_fullMark(int fm)
{
	fm = fullMark;
}

int Subject::get_fullMark()
{
	return fullMark;
}

void Subject::set_studentMark(int sm)
{
	sm = studentMark;
}

int Subject::get_studentMark()
{
	return studentMark;
}

Subject Subject::operator+(Subject s2)
{
	Subject result;
	result.name = name + s2.get_name();
	result.fullMark = fullMark + s2.get_fullMark();
	result.studentMark = studentMark + s2.get_studentMark();

	return result;
}

Subject::Subject()
{
}

Subject::Subject(string n, int fm , int sm)
{
	n = name;
	fm = fullMark;
	sm = studentMark;
}
