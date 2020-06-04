#include <iostream>
#include "Employee.h"

int Employee::numEmployees = 0;

Employee::Employee(){
    numEmployees++;

    firstName = "not given";
    lastName = "not given";
    gender = 'U';
    dependents = 0;
    annualSalary = 20000;
}

Employee::Employee(string fName, string lName, char gen, int dep, Benefit ben){
    numEmployees++;

    setFirstName(fName);
    setLastName(lName);
    setGender(gen);
    setDependents(dep);
    setBenefit(ben);
}

void Employee::setFirstName(string fName){
    firstName = fName;
}
void Employee::setLastName(string lName){
    lastName = lName;
}
void Employee::setGender(char gen){
    gender = gen;
}
void Employee::setDependents(int dep){
    dependents = dep;
}
void Employee::setAnnualSalary(double aSalary){
    annualSalary = aSalary;
}
void Employee::setBenefit(Benefit ben){
    benefit = ben;
}

double Employee::calculatePay(){
    return annualSalary/52;
}
void Employee::displayEmployee(){
    cout << "Employee Information:" << endl;
    cout << "_______________________________________________________________" << endl;
    cout << setw(22) << left << "Name:" << getFirstName() << " " << getLastName() << endl;
    cout << setw(22) << left << "Gender:" << getGender() << endl;
    cout << setw(22) << left << "Dependents:" << getDependents() << endl;
    cout << setw(22) << left << "Annual Salary:" << fixed << setprecision(2) << getAnnualSalary() << endl;
    cout << setw(22) << left << "Weekly Salary:" << calculatePay() << endl;
    cout << "_______________________________________________________________" << endl;
    benefit.displayBenefit();
}
