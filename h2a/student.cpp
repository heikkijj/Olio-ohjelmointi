#include "student.h"

void Student::setName(std::string n) {
    name = n;
}

void Student::setStudentNumber(int sNum) {
    studentNumber = sNum;
}

void Student::setAverage(double avg) {
    average = avg;
}

std::string Student::getName() {
    return name;
}

int Student::getStudentNumber() {
    return studentNumber;
}

double Student::getAverage() {
    return average;
}