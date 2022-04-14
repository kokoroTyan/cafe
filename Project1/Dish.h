#include "Header.h"

class Dish {
	friend void changePrice(Dish& dish);
private:
	static int count;

	string name;
	int weight;
	int callories;
	double price;
	bool available;
public:
	static const int MAX_DISH_WEIGHT = 1000;
	static const int MIN_DISH_WEIGHT = 50;

	static const int MAX_CALLORIES = 800;
	static const int MIN_CALLORIES = 40;

	Dish();
	Dish(string name, int weight, int callories, double price, bool available);
	~Dish();

	string getName();
	void getName(string name);

	int getWeight();
	void setWeight(int weight);

	int getCallories();
	void setCallories(int callories);

	double getPrice();
	void setPrice(double price);

	bool isAvailable();
	void setAvailable(bool available);

	static int getCount();

	string getInfo();
protected:
};
