#include "Dish.h"

int Dish::count = 0;

int Dish::getCount() {
	return count;
}


Dish::Dish() {
	count++;
	name = "no name";
	weight = 0;
	callories = 0;
	price = 0;
	available = false;
}

Dish::Dish(string name, int weight, int callories, double price, bool available) {
	count++;
	this->name = name;
	this->weight = weight;
	this->callories = callories;
	this->price = price;
	this->available = available;
}

Dish::~Dish() {
	count--;
}

string Dish::getName() {
	return name;
}
void Dish::setName(string name) {
	this->name = name;
}

int Dish::getWeight() {
	return weight;
}
void Dish::setWeight(int weight) {
	if (weight >= MIN_DISH_WEIGHT && weight <= MAX_DISH_WEIGHT) {
		this->weight = weight;
	}
}

int Dish::getCallories() {
	return callories;
}
void Dish::setCallories(int callories) {
	if (callories >= MIN_CALLORIES && callories <= MAX_CALLORIES) {
		this->callories = callories;
	}
}

double Dish::getPrice() {
	return price;
}
void Dish::setPrice(double price) {
	if (price > 0) {
		this->price = price;
	}
}

bool Dish::isAvailable() {
	return available;
}
void Dish::setAvailable(bool available) {
	this->available = available;
}

string Dish::getInfo() {
	return name + ": weight = " + to_string(weight) + " g, callories = " +
		to_string(callories) + ", price = " + to_string(price) + "$, " + (available ? "is available." : "isn't available.");
}



