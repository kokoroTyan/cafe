#include "Queue.h"

Queue::Queue() {
	size = 0;
	queue = NULL;
}
Queue::Queue(int size, int* queue) {
	this->size = size;
	this->queue = queue;
}
Queue::~Queue() {
	delete[] queue;
}

void Queue::enQueue(int item) {
	if (queue == NULL) {
		queue = new int[1];
		queue[0] = item;
		size = 1;
	}
	else {
		int* temp = new int[size + 1];
		for (int i = 0; i < size; i++) {
			temp[i] = queue[i];
		}
		temp[size] = item;
		size++;
		delete[] queue;
		queue = temp;
	}
}

int Queue::deQueue() {
	if (queue == NULL) {
		return 0;
	}
	else if (size >= 2) {
		int* temp = new int[size - 1];
		for (int i = 0; i < size-1; i++) {
			temp[i] = queue[i];
		}
		size--;
		delete[] queue;
		queue = temp;
	}
	
	return queue[0];
}

int Queue::head() {
	if (queue == NULL) {
		return 0;
	}
	return queue[0];
}

int Queue::get(int index) {
	if (index >= size) {
		return 0;
	}
	return queue[index - 1];
}
int Queue::getSize() {
	return size;
}
void Queue::clear() {
	delete[] queue;
	size = 0;
}
bool Queue::isEmpty() {
	if (queue == NULL) {
		return true;
	}
	return false;
}

string Queue::getInfo() {
	string msg = "Queue: " + to_string(queue[0]);
	for (int i = 1; i < size; i++) {
		msg += ", " + to_string(queue[i]);
	}
	return msg;
}