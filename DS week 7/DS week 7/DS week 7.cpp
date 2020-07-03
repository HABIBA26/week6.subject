#include "Node.h"
#include "List.h"
#include <iostream>
using namespace std;

int main()
{
	List list;
	list.append(1);
	list.append(5);
	list.append(9);
	list.insert(0, 10);
	list.deleteAt(0);
	list.print();

	return 0;
}