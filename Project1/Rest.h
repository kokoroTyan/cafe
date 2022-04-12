#include "Dish.h"
class Rest
{
private:
	int size;
	string name;
	Dish* list;
public:
	Rest();
	Rest(string name);
	Rest(string name, Dish* list, int size);
	~Rest();

	void add(Dish dish);
	Dish get(int index);
	int getSize();

	string getName();
	void setName(string name);

	string getInfo();
protected:
};

