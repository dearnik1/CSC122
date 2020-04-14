#ifndef Employee_h
#define Employee_h
#include <string>
#include "Benefit.h"

using namespace std;

class Employee{
private:
    string firstName, lastName;
    char gender;
    int dependents;
    double annualSalary;
    Benefit benefit;
public:
    Employee();
    Employee(string fName, string lName, char gen, int dep,
        double aSalary, Benefit ben);
    double calculatePay();
    void displayEmployee();

    //getter
    string getFirstName() const;
    string getLastName() const;
    char getGender() const;
    int getDependents() const;
    double getAnnualSalary() const;
    Benefit getBenefit() const;

    //setter
    void setFirstName(string fName);
    void setLastName(string lName);
    void setGender(char gen);
    void setDependents(int dep);
    void setAnnualSalary(double aSalary);
    void setBenefit(Benefit ben);
};

#endif
