#pragma once
#include "Node.h"
#include <iostream>
using namespace std;
class List
{
private:
	int size;
	Node* head;
public:
	void append(int val);
	void print();
	void insert(int idx, int val);
	void deleteAt(int idx);
	List();
	~List();
};

