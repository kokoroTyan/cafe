#include "Dish.h"

Dish::Dish() {
	name = "no name";
	weight = 0;
	callories = 0;
	price = 0;
	available = false;
}

Dish::Dish(string name, int weight, int callories, double price, bool available) {
	this->name = name;
	this->weight = weight;
	this->callories = callories;
	this->price = price;
	this->available = available;
}

Dish::~Dish() {

}

string Dish::getName() {
	return name;
}
void Dish::getName(string name) {
	this->name = name;
}

int Dish::getWeight() {
	return weight;
}
void Dish::setWeight(int weight) {
	if (weight >= 50 && weight <= 1000) {
		this->weight = weight;
	}
}

int Dish::getCallories() {
	return callories;
}
void Dish::setCallories(int callories) {
	if (callories >= 50 && callories <= 1000) {
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

