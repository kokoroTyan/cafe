#include "Rest.h"

class Manager
{
private:
	string name;
public:

	static const string ALPHABET = "abcdefghijklmnopqrstuvwxyz";
	static const int ALPHABET_COUNT = 26;

	void sortByNameAsc(Rest rest);
	void sortByWeightAsc(Rest rest);
	void sortByWeightDesc(Rest rest);
	void sortByCalloriesAsc(Rest rest);
	void sortByCalloriesDesc(Rest rest);

	bool checkDish(Rest rest, Dish dish);

	double calculateAvgPrice(Rest rest);
	double calculateAvgWeight(Rest rest);
};