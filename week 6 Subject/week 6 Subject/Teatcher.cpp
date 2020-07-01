#include "Teatcher.h"

void Teatcher::set_salary(float s)
{
	s = salary;
}

float Teatcher::get_salary()
{
	return salary;
}

void Teatcher::set_workHour(int w)
{
	w = workHour;
}

int Teatcher::get_workHour()
{
	return workHour;
}

void Teatcher::printInfo()
{
	cout << salary ;
}
