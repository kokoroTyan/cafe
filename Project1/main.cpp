#include "Rest.h"
#include "FirmDish.h"
#include "MagicDish.h"


//1-lvl: login: first, password: 1user
//2-lvl: login: second, password: 2user
//3-lvl: login: third, password: manager

int main() {
    string login, password;
    string beginningFirst = "Successfully signed in as a 1-lvl user!\nYour abilities are:\nTo check all the dishes(1)\nTo check all the restaurants(2)";
    string beginningSecond = "Successfully signed in as a 2-lvl user!\nYour abilities are:\nTo check all the dishes(1)\nTo check all the restaurants(2)\nTo add data(3)\nTo search for data(4)\nTo edit data(5)\nTo work with files(6)";
    string beginningThird = "Successfully signed in as a 3-lvl user(manager)!\nYour abilities are:\nTo check all the dishes(1)\nTo check all the restaurants(2)\nTo add data(3)\nTo search for data(4)\nTo edit data(5)\nTo work with files(6)\nTo delete data(7)";


    Rest r1("Restaurant 1");

    Dish d1("Pudding", 250, 144, 5.7, true);
    MagicDish d2("Salad", 300, 190, 7.1, true, "flyable", 5);
    Dish d3("Pizza", 542, 800, 13.0, true);
    Dish d4("Coffe", 100, 50, 2.0, true);
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
    } while ((login != "first" && password != "1user") || (login != "second" && password != "2user") || (login != "third" && password != "manager"));
    if (login == "first" && password == "1user") {
        cout << beginningFirst << endl;
    }
    else if (login == "second" && password == "2user") {
        cout << beginningSecond << endl;
    }
    else if (login == "third" && password == "manager") {
        cout << beginningThird << endl;
    }
    return 0;
}