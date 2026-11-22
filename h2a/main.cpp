#include <iostream>
#include <memory>
#include "student.h"
#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main() {
    //  CAR: create car object in stack memory(regular local variable)
    Car myCar;
    myCar.setBrand("Toyota");
    myCar.setModel("Corolla");
    myCar.setYearModel(2020);

    cout << endl;
    cout << "car info (stack)" << endl;
    myCar.printData();
    cout << endl;
    cout << endl;

    // RECTANGLE: create rectangle object in heap memory (using operator new)
    Rectangle* myRectangle = new Rectangle();
    myRectangle->setWidth(5.5);
    myRectangle->setHeight(3.0);

    cout << "rectangle info (heap)" << endl;
    cout << "area " << myRectangle->getArea();
    cout << "perimeter " << myRectangle->getCircum();

    delete myRectangle; // delete rectangle object from memory
    myRectangle = nullptr; // set pointer to nullptr after deletion
    cout << endl;
    cout << endl;

    // STUDENT: create student object with smart pointer (unique_ptr)
    unique_ptr<Student> myStudent = make_unique<Student>();
    myStudent->setName("Matti Meikalainen");
    myStudent->setStudentNumber(12345);
    myStudent->setAverage(4.2);
    cout << endl;
    cout << endl;

    cout << "student info (unique_ptr)" << endl;
    cout << "name " << myStudent->getName() << endl;
    cout << "student number " << myStudent->getStudentNumber() << endl;
    cout << "average " << myStudent->getAverage() << endl;

    return 0;
}