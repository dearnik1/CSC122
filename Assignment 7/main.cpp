#include "Employee.h"
#include "Salaried.h"
#include "Hourly.h"
#include <iostream>
int Employee::numEmployees = 0;
int main() {
    string str;
    char gen;
    int num;
    double num1;

    Benefit ben3("fff", 30000, 10);
    Salaried sal1("John", "Johnson", 'M', 2, ben3, 1);
    sal1.setAnnualSalary(75000);
    cout << endl << "***************** Employee " << sal1.getSum() << " *****************" << endl;
    sal1.displayEmployee();

    Employee emp;
    cout << "***************** Employee " << emp.getSum() << " *****************" << endl;
    cout << "Please enter your First Name: ";
    cin >> str;
    emp.setFirstName(str);
    cout << "Please enter your Last Name: ";
    cin >> str;
    emp.setLastName(str);
    cout << "Please enter your Gender: ";
    cin >> gen;
    emp.setGender(gen);
    cout << "Please enter your Dependents: ";
    cin >> num;
    emp.setDependents(num);
    cout << "Please enter your AnnualSalary: ";
    cin >> num1;
    emp.setAnnualSalary(num1);
    Benefit ben1;
    cout << "Please enter your Health Insurance: ";
    cin >> str;
    ben1.setHealthinsurance(str);
    cout << "Please enter your Life Insurance: ";
    cin >> num1;
    ben1.setLifeinsurance(num1);
    cout << "Please enter your Vacation Days: ";
    cin >> num;
    ben1.setVacation(num);
    emp.setBenefit(ben1);
    emp.displayEmployee();
   

    Salaried sal;
    cout << endl << "***************** Employee " << sal.getSum() << " *****************" << endl;
    cout << "Please enter your First Name: ";
    cin >> str;
    sal.setFirstName(str);
    cout << "Please enter your Last Name: ";
    cin >> str;
    sal.setLastName(str);
    cout << "Please enter your Gender: ";
    cin >> gen;
    sal.setGender(gen);
    cout << "Please enter your Dependents: ";
    cin >> num;
    sal.setDependents(num);
    cout << "Please enter your AnnualSalary: ";
    cin >> num1;
    sal.setAnnualSalary(num1);
    Benefit ben2;
    cout << "Please enter your Health Insurance: ";
    cin >> str;
    ben2.setHealthinsurance(str);
    cout << "Please enter your Life Insurance: ";
    cin >> num1;
    ben2.setLifeinsurance(num1);
    cout << "Please enter your Vacation Days: ";
    cin >> num;
    ben2.setVacation(num);
    sal.setBenefit(ben2);
    sal.setManLevel(2);
    sal.displayEmployee();

       


    Hourly hou;
    cout << endl << "***************** Employee " << hou.getSum() << " *****************" << endl;
    cout << "Please enter your First Name: ";
    cin >> str;
    hou.setFirstName(str);
    cout << "Please enter your Last Name: ";
    cin >> str;
    hou.setLastName(str);
    cout << "Please enter your Gender: ";
    cin >> gen;
    hou.setGender(gen);
    cout << "Please enter your Dependents: ";
    cin >> num;
    hou.setDependents(num);
    Benefit ben4;
    cout << "Please enter your Health Insurance: ";
    cin >> str;
    ben4.setHealthinsurance(str);
    cout << "Please enter your Life Insurance: ";
    cin >> num1;
    ben4.setLifeinsurance(num1);
    cout << "Please enter your Vacation Days: ";
    cin >> num;
    ben4.setVacation(num);
    hou.setBenefit(ben4);
    hou.setHours(50);
    hou.setWage(30);
    hou.displayEmployee();


    Benefit ben5("ppo", 80000, 2);
    Hourly hou2("Nick", "Stivenson", 'm', 6, ben5,
        12, 70, "full time");


	system("pause");
    return 0;
}
