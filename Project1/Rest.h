#include "Dish.h"
class Rest
{
	friend class Manager;
private:
	static int count;
	int size;
	string name;
	Dish** list;
public:
	Rest();
	Rest(string name);
	Rest(string name, Dish** list, int size);
	~Rest();

	void add(Dish* dish);
	void remove(Dish* dish);
	Dish* get(int index);

	int getSize();
	void setSize(int size);

	string getName();
	void setName(string name);

	string getInfo();

	static int getCount();
protected:
};

