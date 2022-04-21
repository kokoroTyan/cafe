#include "Queue.h"
#include "Point.h"
#include "Stack.h"

int main() {
	Point point1(3,6);
	Point point2(5, 7);

	Point point3 = point1.sum(point2);
	cout << point1.getInfo() << endl;
	cout << point2.getInfo() << endl;
	cout << point3.getInfo() << endl;

	point3 = point1 + point2;
	point3 = point1 - point2;
	point3 = point1 * point2;

	return 0;
}

//Stack LIFO(Last In First Out)
//Queue FIFO(First In First Out)