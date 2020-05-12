#ifndef Employee_h
#define Employee_h
#include <string>
#include <iostream>
#include <iomanip>
#include "Benefit.h"

using namespace std;

class Employee{
protected:
    string firstName, lastName;
    char gender;
    int dependents;
    double annualSalary;
    Benefit benefit;
private:
    static int numEmployees;
    int sum;
public:
    Employee();
    Employee(string fName, string lName, char gen, int dep, Benefit ben);
    virtual double calculatePay();
    virtual void displayEmployee();

    //getter
    int getSum() const { return sum; }
    string getFirstName() const {return firstName;}
    string getLastName() const {return lastName;}
    char getGender() const {return gender;}
    int getDependents() const {return dependents;}
    double getAnnualSalary() const {return annualSalary;}
    Benefit getBenefit() const {return benefit;}
    
    //setter
    void setFirstName(string fName);
    void setLastName(string lName);
    void setGender(char gen);
    void setDependents(int dep);
    virtual void setAnnualSalary(double aSalary);
    void setBenefit(Benefit ben);
};

#endif
