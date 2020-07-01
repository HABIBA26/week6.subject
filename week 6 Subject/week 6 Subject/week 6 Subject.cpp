using namespace std;
#include <iostream>
#include "Teatcher.h"
#include "Student.h"

int main()
{
	Teatcher t;
	t.set_name("aly");
	t.set_salary(200);

	Student s;
	s.set_name("omar");
	s.set_grade(12);
	t.printInfo();

	cout << t.get_name() << ' ' << s.get_name() << ' ' << t.get_id() << ' ' << s.get_id();
	return 0;
}
