#include "car.h"
#include <iostream>

//constructor making
Car::Car(std::string b, std::string m, int y) {
    brand = b;
    model = m;
    yearModel = y;
}

// printData method making
void Car::printData() const {
    std::cout << "Brand: "<< brand << std::endl;
    std::cout << "Model: "<< model << std::endl;
    std::cout << "Year: "<< yearModel << std::endl;
}


