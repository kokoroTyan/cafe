#include "Header.h"

class Queue {
private:
	int size;
	int* queue;
public:
	Queue();
	Queue(int size, int* queue);
	~Queue();

	void enQueue(int item); //adds an item to queue
	int deQueue(); //deletes last element and returns first
	int head(); //returns first element
	
	int get(int index); 
	int getSize();
	void clear();
	bool isEmpty();

	string getInfo();
};
