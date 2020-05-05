#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class employee {
private:
    int number, age;
    string name, education;
    char gender;
    
public:
    employee();
    //sets
    void setNumber(int);
    void setName(string);
    void setAge(int);
    void setGender(char);
    void setEducation(string);
    //gets
    int getNumber() { return number; }
    string getName() { return name; }
    int getAge() { return age; }
    char getGender() { return gender; }
    string getEducation() { return education; }
};

#endif
