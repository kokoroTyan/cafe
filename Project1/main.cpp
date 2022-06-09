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
		system("cls");
		if (answer=="name") {
			cout << "Input dishes' new name: ";
			cin >> name;
			r1.get(index)->setName(name);
			cout << r1.getInfo();
		} else if (answer == "weight") {
			cout << "Input dishes' new weight: ";
			cin >> weight;
			r1.get(index)->setWeight(weight);
			cout << r1.getInfo();
		} else if (answer == "callories") {
			cout << "Input dishes' new ammount of callories: ";
			cin >> callories;
			r1.get(index)->setCallories(callories);
			cout << r1.getInfo();
		} else if (answer == "price") {
			cout << "Input dishes' new price: ";
			cin >> price;
			r1.get(index)->setPrice(price);
			cout << r1.getInfo();
		} else if (answer == "availability") {
			cout << "Input dishes' new status(available - 1, not available - 0): ";
			cin >> available;
			r1.get(index)->setAvailable(available);
			cout << r1.getInfo();
		}
		else {
			cout << "Sorry, this option isn't allowed for you :(" << endl;
		}
	}
	else if (option == 6) {
	cout << "We're working on this..." << endl;
	}
	else if (option == 7 && login != "first" && login != "second") {
		cout << "That's how the restaurant looks now\n";
		cout << r1.getInfo();
		cout << "Input the index of the dish you want to remove: ";
		cin >> index;
		r1.remove(r1.get(index));
		system("cls");
		cout << "That's how the restaurant looks after deleting\n";
		cout << r1.getInfo();
	}
	else {
		option == 0;
		system("cls");
		cout << "U entered an invalid option number! Please try again :)" << endl;
	}

	return 0;
}