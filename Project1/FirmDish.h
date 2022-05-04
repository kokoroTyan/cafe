#include "Dish.h"

class FirmDish
{
private:
	static int count;

	string name;
	int weight;
	int callories;
	double price;
	bool available;

	string chiefName;
	double rating;

public:
	static const int MAX_DISH_WEIGHT = 1000;
	static const int MIN_DISH_WEIGHT = 50;

	static const int MAX_CALLORIES = 800;
	static const int MIN_CALLORIES = 40;

	FirmDish();
	FirmDish(string name, int weight, int callories, double price, bool available,
		string chiefName, double rating);
	~FirmDish();

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

	string getChiefName();
	void setChiefName(string ChiefName);
	
	double getRating();
	void setRating(double rating);

	static int getCount();

	string getInfo();
};
