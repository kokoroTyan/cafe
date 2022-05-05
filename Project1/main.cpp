#include "Rest.h"
#include "FirmDish.h"
        
void testing(Dish** list, int size) {
    for (int i = 0; i < size;i++) {
        cout << list[i]->getInfo() << endl;
    }
}

int main() {
    Dish** d1 = new Dish*[3];
    d1[0] = new FirmDish("Sushi", 100, 144, 15, true, "Mr.Cook", 4.8);
    d1[1] = new Dish("Rice", 50, 144, 5, true);
    d1[2] = new Dish("Pizza", 50, 144, 10, true);
    testing(d1, 3);

    /*Dish dish();
    FirmDish fDish1;
    cout << fDish1.getInfo() << endl;*/
    
    /*Rest r1("Restaurant 1");

    Dish d1("Pudding", 250, 144, 5.7, true);
    Dish d2("Salad", 300, 190, 7.1, true);
    Dish d3("Pizza", 542, 800, 13.0, true);
    Dish d4("Coffe", 100, 50, 2.0, true);
    Dish d5("Cake", 300, 520, 4.3, true);

    r1.add(d1);
    r1.add(d2);
    r1.add(d3);
    r1.add(d4);
    r1.add(d5);*/

    /*cout << r1.getInfo() << endl;
    cout << "Count of dishes right nom: " << Dish::getCount() << endl;*/

    
    return 0;
}