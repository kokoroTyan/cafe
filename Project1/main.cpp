#include "Rest.h"

int main() {
    Rest r1("Restaurant 1");
    Rest r2("Restaurant 1");

    Dish d1("Pudding", 250, 144, 5.7, true);
    Dish d2("Salad", 300, 190, 7.1, true);
    Dish d3("Pizza", 542, 800, 13.0, true);
    Dish d4("Coffe", 100, 50, 2.0, true);
    Dish d5("Cake", 300, 520, 4.3, true);

    r1.add(d1);
    r1.add(d2);
    r1.add(d3);

    r2.add(d4);
    r2.add(d5);

    cout << r1.getInfo() << endl;
    cout << r1.getInfo() << endl;

    return 0;
}