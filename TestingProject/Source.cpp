#include "Queue.h"
#include "Point.h"
#include "Stack.h"

int main() {
	Point point1(3,6);
	Point point2(5, 7);

	Point point3;
	cout << point1.getInfo() << endl;
	cout << point2.getInfo() << endl;
	
	point3 = point2 - point1;
	int result = point1 * point2;
	cout << point3.getInfo() << endl << result;

	return 0;
}

//Stack LIFO(Last In First Out)
//Queue FIFO(First In First Out)