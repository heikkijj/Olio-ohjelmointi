#ifndef CAR_H
#define CAR_H

#include <string>

class Car
{
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    // constructor what takes brand,model,yarmodel data
    Car(std::string b, std::string m, int y);

    //method for printing
    void printData() const;
};

#endif // CAR_H
