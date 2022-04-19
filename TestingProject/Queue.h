class Queue {
private:
	int size;
	int* queue;
public:
	void enQueue(int item); //adds an item to queue
	int deQueue(); //deletes last element and returns first
	int head(); //returns first element
	
	int get(int index); 
	int size();
	void clear(int* queue);
	bool isEmpty();
};
