#include "Rest.h"
#include "FirmDish.h"
#include "MagicDish.h"


//1-lvl: login: first, password: 1user
//2-lvl: login: second, password: 2user
//3-lvl: login: third, password: manager

int main() {
	int option = 0;
	string login, password;
	string beginningFirst = "Successfully signed in as a 1-lvl user!\nYour abilities are:\nTo view all the dishes(1)\nTo view all the restaurants(2)";
	string beginningSecond = "Successfully signed in as a 2-lvl user!\nYour abilities are:\nTo view all the dishes(1)\nTo view all the restaurants(2)\nTo add data(3)\nTo search for data(4)\nTo edit data(5)\nTo work with files(6)";
	string beginningThird = "Successfully signed in as a 3-lvl user(manager)!\nYour abilities are:\nTo view all the dishes(1)\nTo view all the restaurants(2)\nTo add data(3)\nTo search for data(4)\nTo edit data(5)\nTo work with files(6)\nTo delete data(7)";


	Rest r1("Restaurant 1");

	Dish d1("Pudding", 250, 144, 5.7, true);
	MagicDish d2("Salad", 300, 190, 7.1, true, "flyable", 5);
	Dish d3("Pizza", 542, 800, 13.0, true);
	FirmDish d4("Coffe", 100, 50, 2.0, true, "Mr.Cook", 7.8);
	Dish d5("Cake", 300, 520, 4.3, true);

	/*r1.add(d2);
	cout << r1.getInfo() << endl;
	cout << "Count of dishes right now: " << Dish::getCount() << endl;*/
	do {
		cout << "Sign out as a 1-lvl user, a 2-lvl, or a 3-lvl user(manager):\nLogin: ";
		cin >> login;
		cout << "Password: ";
		cin >> password;
		system("cls");
	} while ((login != "first" && password != "1user") && (login != "second" && password != "2user") && (login != "third" && password != "manager"));

	if (login == "first" && password == "1user") {
		cout << beginningFirst << endl << "\Choose your option: ";
		cin >> option;
	}
	else if (login == "second" && password == "2user") {
		cout << beginningSecond << endl << "\Choose your option: ";
		cin >> option;
	}
	else if (login == "third" && password == "manager") {
		cout << beginningThird << endl << "\Choose your option: ";
		cin >> option;
	}
	system("cls");

	if (option == 1) {
		cout << "Count of dishes right now: " << Dish::getCount() << ".\nThose are:" << endl;
		cout << d1.getInfo() << endl << d2.getInfo() << endl << d3.getInfo() << endl << d4.getInfo() << endl << d5.getInfo() << endl;
	}
	else if (option == 2) {
		cout << "Count of restaurants right now: " << Rest::getCount() << ".\nThose are:" << endl;
		cout << d1.getInfo() << endl << d2.getInfo() << endl << d3.getInfo() << endl << d4.getInfo() << endl << d5.getInfo() << endl;
	}
	else if (option == 3 && login!="first") {

	}
	else if (option == 4) {

	}
	else if (option == 5) {

	}
	else if (option == 6) {

	}
	else if (option == 7 && login != "first" && login != "second") {

	}
	else {
		option == 0;
		system("cls");
		cout << "U entered an invalid option number! Please try again :)" << endl;
	}



	return 0;
}