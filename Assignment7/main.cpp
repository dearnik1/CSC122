#include "Employee.h"
#include "Salaried.h"
#include "Hourly.h"
#include <iostream>
#include <type_traits>

template <typename T>
void inputBasicInfo(T &t){
    string str;
    char gen;
    int num;
    double num1;

    cout << "***************** Employee " << t.getNumEmployees() << " *****************" << endl;
    cout << "Please enter your First Name: ";
    cin >> str;
    t.setFirstName(str);
    cout << "Please enter your Last Name: ";
    cin >> str;
    t.setLastName(str);
    cout << "Please enter your Gender: ";
    cin >> gen;
    t.setGender(gen);
    cout << "Please enter your Dependents: ";
    cin >> num;
    t.setDependents(num);

    Benefit ben;
    cout << "Please enter your Health Insurance: ";
    cin >> str;
    ben.setHealthinsurance(str);
    cout << "Please enter your Life Insurance: ";
    cin >> num1;
    ben.setLifeinsurance(num1);
    cout << "Please enter your Vacation Days: ";
    cin >> num;
    ben.setVacation(num);
    t.setBenefit(ben);
}

int main() {

    Benefit ben3("fff", 30000, 10);
    Salaried sal1("John", "Johnson", 'M', 2, ben3, 1);
    sal1.setAnnualSalary(75000);
    cout << endl << "***************** Employee " << sal1.getNumEmployees() << " *****************" << endl;
    sal1.displayEmployee();

    double annualSalary;
    Employee emp;
    inputBasicInfo(emp);
    cout << "Please enter your AnnualSalary: ";
    cin >> annualSalary;
    emp.setAnnualSalary(annualSalary);
    emp.displayEmployee();


    Salaried sal;
    inputBasicInfo(sal);
    cout << "Please enter your AnnualSalary: ";
    cin >> annualSalary;
    sal.setAnnualSalary(annualSalary);
    sal.setManLevel(2);
    sal.displayEmployee();


    Hourly hou;
    inputBasicInfo(hou);
    hou.setHours(50);
    hou.setWage(30);
    hou.setAnnualSalary();
    hou.displayEmployee();

    Benefit ben5("ppo", 80000, 2);
    Hourly hou2("Nick", "Stivenson", 'm', 6, ben5,
        12, 50, "full time");
    hou2.setAnnualSalary();
    hou2.displayEmployee();

	Hourly hou3(20, 30, "part time");		// testing another constructor

	system("pause");
    return 0;
}
