
#include <iostream>
#include "Employee.h"


int Employee::numEmployees;

Employee::Employee(){
    firstName = "not given";
    lastName = "not given";
    gender = 'U';
    dependents = 0;
    annualSalary = 20000;
}
Employee::Employee(string fName, string lName, char gen, int dep,
    double aSalary, Benefit ben){

    firstName = fName;
    lastName = lName;
    gender = gen;
    dependents = dep;
    annualSalary = aSalary;
    benefit = ben;

}

void Employee::setNumEmployees(int numE){
    numEmployees = numE;
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
    cout << "==============Employee Info==============" << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Gender: " << gender << endl;
    cout << "Dependents: " << dependents << endl;
    cout << "Annual Salary: " << annualSalary << endl;
    cout << "Weekly Pay: " << calculatePay() << endl;
    benefit.displayBenefit();
}
