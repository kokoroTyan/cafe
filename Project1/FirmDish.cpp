#include "FirmDish.h"

FirmDish::FirmDish() : Dish() {
	chiefName = "no name";
	rating = 0;
}
FirmDish::FirmDish(string name, int weight, int callories, double price, bool available,
	string chiefName, double rating) : Dish(name, weight, callories, price, available) {
	this->chiefName = chiefName;
	this->rating = rating;
}
FirmDish::~FirmDish() {}

string FirmDish::getChiefName() {
	return chiefName;
}
void FirmDish::setChiefName(string chiefName) {
	this->chiefName = chiefName;
}
double FirmDish::getRating() {
	return rating;
}
void FirmDish::setRating(double rating) {
	this->rating = rating;
}

string FirmDish::getInfo() {
	return Dish::getInfo() + "\nAuthor: " + chiefName + ", dish rating = " + to_string(rating);
}