#include "Point.h"

Point::Point() {
	x = 0;
	y = 0;
}
Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}
int Point::getX() {
	return x;
}
int Point::getY() {
	return y;
}
void Point::setX(int x) {
	this->x = x;
}
void Point::setY(int y) {
	this->y = y;
}

Point Point::sum(Point point2) const {
	return Point(x + point2.x, y + point2.y);
}
Point Point::operator +(Point point2) const {
	return Point(x + point2.x, y + point2.y);
}

Point Point::minus(Point point2) const {
	return Point(x - point2.x, y - point2.y);
}
int Point::multiply(Point point2) const {
	return x * point2.x + y * point2.y;
}

string Point::getInfo() {
	return "Point: x = " + to_string(x) + ", y = " + to_string(y);
}