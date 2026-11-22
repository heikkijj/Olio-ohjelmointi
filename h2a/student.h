#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string name;
    int studentNumber;
    double average;

public:
    void setName(std::string n);
    void setStudentNumber(int sNum);
    void setAverage(double avg);

    std::string getName();
    int getStudentNumber();
    double getAverage();
};

#endif // STUDENT_H
