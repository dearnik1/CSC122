#include "Employee.h"

int main() {


    Employee emp1; // using default constructor
    emp1.setFirstName("nobody1");
    emp1.setLastName("unknow1");
    emp1.setGender('M');
    emp1.setDependents(1);
    emp1.setAnnualSalary(300000);
    Benefit ben1;
    ben1.setHealthinsurance("unknow healthinsurance");
    ben1.setLifeinsurance(10000);
    ben1.setVacation(10);
    emp1.setBenefit(ben1);

    //invoke the object's displayEmployee() method
    emp1.displayEmployee();


    // using overload constructor
    Benefit ben2("unknow2 healthinsurance", 30000, 30);
    Employee emp2("nobody2", "unknow2",'F', 0, 50000, ben2);

    emp2.displayEmployee();

    Benefit ben3("unknow3 healthinsurance", 20000, 20);
    emp2.setBenefit(ben3);

    // show the info modified by setter
    emp2.displayEmployee();

	system("pause");
    return 0;
}
