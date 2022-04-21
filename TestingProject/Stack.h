#include "Header.h"

class Stack
{
private:
	int size;
	int* stack;
public:
	Stack();
	Stack(int size, int* stack);
	~Stack();

	void push(int item); //adds an item to queue
	int pop(); //deletes last element and returns first
	int head(); //returns first element

	int get(int index);
	int getSize();
	void clear();
	bool isEmpty();

	string getInfo();
};

