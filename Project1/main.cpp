#include "Rest.h"
#include "FirmDish.h"
#include "MagicDish.h"


//1-lvl: login: first, password: 1user
//2-lvl: login: second, password: 2user
//3-lvl: login: third, password: manager

int main() {
	string name;
	int weight;
	int callories;
	double price;
	bool available;
	string chiefName;
	double rating;
	string power;
	int duration;

	string answer;
	int index = 0;
	int option = 0;
	string login, password;
	string beginningFirst = "Successfully signed in as a 1-lvl user!\nYour abilities are:\nTo view all the dishes(1)\nTo view all the restaurants(2)";
	string beginningSecond = "Successfully signed in as a 2-lvl user!\nYour abilities are:\nTo view all the dishes(1)\nTo view all the restaurants(2)\nTo add data(3)\nTo search for data(4)\nTo edit data(5)\nTo work with files(6)";
	string beginningThird = "Successfully signed in as a 3-lvl user(manager)!\nYour abilities are:\nTo view all the dishes(1)\nTo view all the restaurants(2)\nTo add data(3)\nTo search for data(4)\nTo edit data(5)\nTo work with files(6)\nTo delete data(7)";


	Rest r1("Restaurant 1");

	Dish* d1 = new Dish("Pudding", 250, 144, 5.7, true);
	Dish* d2 = new MagicDish("Salad", 300, 190, 7.1, true, "flyable", 5);
	Dish* d3 = new Dish("Pizza", 542, 800, 13.0, true);
	Dish* d4 = new FirmDish("Coffe", 100, 50, 2.0, true, "Mr.Cook", 7.8);
	Dish* d5 = new Dish("Cake", 300, 520, 4.3, true);

	r1.add(d1);
	r1.add(d2);
	r1.add(d3);
	r1.add(d4);
	r1.add(d5);
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
		cout << d1->getInfo() << endl << d2->getInfo() << endl << d3->getInfo() << endl << d4->getInfo() << endl << d5->getInfo() << endl;
	}
	else if (option == 2) {
		cout << "Count of restaurants right now: " << Rest::getCount() << endl;
		cout << r1.getInfo() << endl;
	}
	else if (option == 3 && login!="first") {
		cout << "Would you like to add a usual dish(1), a magic dish(2) or a firm dish(3)?";
		cin >> option;
		if (option==1) {
			cout << "Input your dishes' name: ";
			cin >> name;
			cout << "Input your dishes' weight: ";
			cin >> weight;
			cout << "Input your dishes' ammount of callories: ";
			cin >> callories;
			cout << "Input your dishes' price: ";
			cin >> price;
			cout << "Is your dish available(input 1 for yes/0 for no)? ";
			cin >> available;
			r1.add(new Dish(name, weight, callories, price, available));
			cout << r1.getInfo() << endl;
		}else if (option == 2) {
			cout << "Input your dishes' name: ";
			cin >> name;
			cout << "Input your dishes' weight: ";
			cin >> weight;
			cout << "Input your dishes' ammount of callories: ";
			cin >> callories;
			cout << "Input your dishes' price: ";
			cin >> price;
			cout << "Is your dish available(input 1 for yes/0 for no)? ";
			cin >> available;
			cout << "Input your dishes' superpower: ";
			cin >> power;
			cout << "Input your dishes' superpower duration: ";
			cin >> duration;
			r1.add(new MagicDish(name, weight, callories, price, available, power, duration));
			cout << r1.getInfo() << endl;
		}else if (option == 3) {
			cout << "Input your dishes' name: ";
			cin >> name;
			cout << "Input your dishes' weight: ";
			cin >> weight;
			cout << "Input your dishes' ammount of callories: ";
			cin >> callories;
			cout << "Input your dishes' price: ";
			cin >> price;
			cout << "Is your dish available(input 1 for yes/0 for no)? ";
			cin >> available;
			cout << "Input your dishes' chief name: ";
			cin >> chiefName;
			cout << "Input your dishes' rating: ";
			cin >> rating;
			r1.add(new MagicDish(name, weight, callories, price, available, chiefName, rating));
			cout << r1.getInfo() << endl;
		}
	}
	else if (option == 4) {
		cout << "Input the index of a dish you want to find: ";
		cin >> index;
		cout << "Here's the dish you were looking for(if the string is a basic one, such a dish doesn't exist):\n" << r1.get(index)->getInfo() << endl;
	}
	else if (option == 5) {
		cout << r1.get(index)->getInfo() << "\nWhich dish would you like to change(input the index)? ";
		cin >> index;
		cout << "What exactly would you like to change(name, weight, callories, price, availability)? ";
		cin >> answer;
		if (answer=="name") {
		
		} else if (answer == "weight") {

		} else if (answer == "callories") {

		} else if (answer == "price") {
		
		} else if (answer == "availability") {

		}
		else {
			cout << "Sorry, this option isn't allowed for you :(" << endl;
		}
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