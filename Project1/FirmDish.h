#include "Dish.h"

class FirmDish : public Dish
{
private:
	string chiefName;
	double rating;

public:
	FirmDish();
	FirmDish(string name, int weight, int callories, double price, bool available,
		string chiefName, double rating);
	~FirmDish();

	string getChiefName();
	void setChiefName(string ChiefName);
	double getRating();
	void setRating(double rating);

	virtual string getInfo();
	//virtual makes a function available for polimorfism
};