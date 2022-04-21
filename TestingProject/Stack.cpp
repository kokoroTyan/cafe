#include "Stack.h"

Stack::Stack() {
	size = 0;
	stack = NULL;
}
Stack::Stack(int size, int* stack) {
	this->size = size;
	this->stack = stack;
}
Stack::~Stack() {
	delete[] stack;
}

void Stack::push(int item) {
	if (stack == NULL) {
		stack = new int[1];
		stack[0] = item;
		size = 1;
	}
	else {
		int* temp = new int[size + 1];
		for (int i = 0; i < size; i++) {
			temp[i] = stack[i];
		}
		temp[size] = item;
		size++;
		delete[] stack;
		stack = temp;
	}
}
int Stack::pop() {
	if (stack == NULL) {
		return 0;
	}
	else if (size >= 2) {
		int* temp = new int[size - 1];
		for (int i = 0; i < size - 1; i++) {
			temp[i] = stack[i];
		}
		size--; delete[] stack;
		stack = temp;
	}

	return stack[size-1];
}
int Stack::head() {
	if (stack == NULL) {
		return 0;
	}
	return stack[size-1];
}

int Stack::get(int index) {
	if (index >= size) {
		return 0;
	}
	return stack[size - index];
}
int Stack::getSize() {
	return size;
}
void Stack::clear() {
	delete[] stack;
	size = 0;
}
bool Stack::isEmpty() {
	if (stack == NULL) {
		return true;
	}
	return false;
}

string Stack::getInfo() {
	string msg = "Stack: " + to_string(stack[size-1]);
	for (int i = size-2; i >= 0; i--) {
		msg += ", " + to_string(stack[i]);
	}
	return msg;
}