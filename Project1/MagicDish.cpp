#include "MagicDish.h"

MagicDish::MagicDish() : Dish() {
	power = "usual";
	duration = 0;
}
MagicDish::MagicDish(string name, int weight, int callories, double price, bool available,
	string power, int duration): Dish(name, weight, callories, price, available){
	this->power = power;
	this->duration = duration;
}
MagicDish::~MagicDish() {}

string MagicDish::getPower() {
	return power;
}
void MagicDish::setPower(string power) {
	this->power = power;
}
int MagicDish::getDuration() {
	return duration;
}
void MagicDish::setDuration(int duration) {
	this->duration = duration;
}

string MagicDish::getInfo() {
	return Dish::getInfo() + "Superpower: " + power + ", power duration = " + to_string(duration) + "\n";
}
