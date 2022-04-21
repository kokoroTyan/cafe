#include "Header.h"
class Point
{
private:
	int x;
	int y;
public:
	Point();
	Point(int x, int y);

	int getX();
	int getY();
	void setX(int x);
	void setY(int y);

	Point sum(Point point2) const;
	Point minus(Point point2) const;
	int multiply(Point point2) const;
	string getInfo();
};

//methods with const guarantee that the object itself won't be changed