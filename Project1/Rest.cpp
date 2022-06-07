#include "Rest.h"
int Rest::count = 0;

int Rest::getCount() {
	return count;
}

Rest::Rest() {
	count++;
	name = "no restaurant name";
	size = 0;
	list = NULL;
}

Rest::Rest(string name) {
	count++;
	this->name = name;
	size = 0;
	list = NULL;
}

Rest::Rest(string name, Dish* list, int size) {
	count++;
	this->name = name;
	this->size = size;
	this->list = list;
}
Rest::~Rest() {
	count--;
	if (list != NULL) {
		delete[] list;
	}
}


Dish Rest::get(int index) {
	if (list != NULL || index < 0 || index >= size) {
		return Dish("", 0, 0, 0, false);
	}
	return list[index];
}
int Rest::getSize() {
	return size;
}

string Rest::getName() {
	return name;
}
void Rest::setName(string name) {
	this->name = name;
}

string Rest::getInfo() {
	if (list == NULL || size == 0) {
		return "Restaurant '" + name + "' is empty.";
	}
	string msg = "Dishes of restaurant '" + name + "' :\n";
	for (int i = 0; i < size; i++)
	{
		if (list[i].isAvailable()) {
			msg += list[i].getInfo() + "\n";
		}
	}
	return msg;
}

void Rest::add(Dish dish) {
	if (list = NULL) {
		list = new Dish[1];
		list[0] = dish;
		size = 1;
	}
	else {
		Dish* temp = new Dish[size + 1];
		for (int i = 0; i < size; i++) {
			temp[i] = list[i];
		}
		temp[size] = dish;
		size++;
		delete[] list;
		list = temp;
	}
}