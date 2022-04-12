#include "Header.h"

class Dish {
private:
	string name;
	int weight;
	int callories;
	double price;
	bool available;
public:
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

	string getInfo();
protected:
};
