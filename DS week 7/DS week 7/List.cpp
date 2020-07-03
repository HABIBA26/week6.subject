#include "List.h"
#include "assert.h"

void List::append(int val)
{
	Node* newNode = new Node(val);
	if (head == nullptr)
	{
		head=newNode;
	}
	else
	{
		Node* currentNode = head;
		while (currentNode->next != nullptr)
		{
			currentNode = currentNode->next;
		}
		currentNode->next = newNode;
	}
	size++;
}

void List::print()
{
	Node* currentNode = head;
	while (currentNode != nullptr)
	{
		cout << currentNode->value << endl;
		currentNode = currentNode->next;
	}
}

void List::insert(int idx, int val)
{
	assert(idx >= 0 && idx <= size);
	Node* newNode = new Node(val);
	if (idx == 0)
	{
		newNode->next = head;
		head = newNode;
	}
	else
	{
		Node* currentNode = head;
		int i = 0;
		while (i < idx - 1)
		{
			currentNode = currentNode->next;
			i++;
		}
        newNode->next=currentNode->next;
		currentNode->next = newNode;

	}
	size++;
}

void List::deleteAt(int idx)
{
	assert(idx >= 0 && idx <= size);
	if (idx == 0)
	{
		head->next = head; 
		delete head;
	}
	else
	{
		Node* currentNode = head;
		Node* del = head;
		int i = 0;
		int j = 0;
		while (i < idx-1 )
		{
			currentNode = currentNode->next;
			i++;
		}
		while (j < idx)
		{
			del = del->next;
			j++;
		}
		currentNode->next = del->next;
		delete del;
	}
	size--;
}



List::List():head(nullptr),size(0)
{
}

List::~List()
{
	while (head!=nullptr)
	{
		Node* currentNode = head->next;
		delete head;
		head = currentNode;

	}
}
