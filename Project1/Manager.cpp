#include "Manager.h"

void Manager::sortByNameAsc(Rest rest) {

}

void Manager::sortByWeightAsc(Rest rest) {}
void Manager::sortByWeightDesc(Rest rest) {}
void Manager::sortByCalloriesAsc(Rest rest) {}
void Manager::sortByCalloriesDesc(Rest rest) {}

bool Manager::checkDish(Rest rest, Dish dish) {
	for (int i = 0; i < rest.size; i++) {
		if (rest.list[i].getName() == dish.getName() &&
			rest.list[i].getWeight() == dish.getWeight() &&
			rest.list[i].getCallories() == dish.getCallories() &&
			rest.list[i].getPrice() == dish.getPrice() &&
			rest.list[i].isAvailable() == dish.isAvailable()) {
			return true;
		}
	}
	return false;
}

double Manager::calculateAvgPrice(Rest rest) {
	int avg = 0.0;
	for (int i = 0; i < rest.size; i++) {
		avg += rest.list[i].getPrice();
	}
	return avg / rest.size;
}

double Manager::calculateAvgWeight(Rest rest) {
	int avg = 0.0;
	for (int i = 0; i < rest.size; i++) {
		avg += rest.list[i].getWeight();
	}
	return avg / rest.size;
}