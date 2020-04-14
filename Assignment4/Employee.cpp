
#include <iostream>
#include "Employee.h"


Employee::Employee(){
    firstName = "not given";
    lastName = "not given";
    gender = 'U';
    dependents = 0;
    annualSalary = 20000;
}
Employee::Employee(string fName, string lName, char gen, int dep,
    double aSalary, Benefit ben){
    setFirstName(fName);
    setLastName(lName);
    setGender(gen);
    setDependents(dep);
    setAnnualSalary(aSalary);
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

string getFirstName() const { 
    return firstName; 
}
string getLastName() const { 
    return lastName; 
}
char getGender() const { 
    return gender; 
}
int getDependents() const { 
    return dependents; 
}
double getAnnualSalary() const { 
    return annualSalary; 
}
Benefit getBenefit() const { 
    return benefit; 
}    
    
double Employee::calculatePay(){
    return annualSalary/52;
}
void Employee::displayEmployee(){
    cout << "==============Employee Info==============" << endl;
    cout << "First Name: " << getFirstName() << endl;
    cout << "Last Name: " << getLastName() << endl;
    cout << "Gender: " << getGender() << endl;
    cout << "Dependents: " << getDependents() << endl;
    cout << "Annual Salary: " << getAnnualSalary() << endl;
    cout << "Weekly Pay: " << getCalculatePay() << endl;
    benefit.displayBenefit();
}
