#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    //1. create vector for car object stack
    vector<Car> carList;

    //2. adding test data to car list
    carList.push_back(Car("Toyota", "Corolla", 2020));
    carList.push_back(Car("Tesla", "Model 3", 2023));
    carList.push_back(Car("Ford", "Mustang", 1960));

    // 3. print secound car in the list
    cout << "-Secound car for list-" << endl;
    carList[1].printData();
    cout << endl;

    // 4. print all car using for loop
    cout << "-All car for list-" << endl;
    for (size_t i = 0; i < carList.size(); ++i) {
        cout << "car " << (i +1) << endl;
        carList[i].printData();
        cout << endl;
    }
    return 0;
}
