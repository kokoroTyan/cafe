#include "Dish.h"
class MagicDish : public Dish
{
private:
	string power;
	int duration;

public:
	MagicDish();
	MagicDish(string name, int weight, int callories, double price, bool available,
		string power, int duration);
	~MagicDish();

	string getPower();
	void setPower(string power);
	int getDuration();
	void setDuration(int duration);

	string getInfo();
};

