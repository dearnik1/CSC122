#include "Employee.h"

int main(int argc, char const *argv[]) {


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
    Benefit ben2;
    ben2.setHealthinsurance("unknow2 healthinsurance");
    ben2.setLifeinsurance(30000);
    ben2.setVacation(30);
    Employee emp2("nobody2", "unknow2",'F', 0,50000,ben2);

    emp2.displayEmployee();

    emp2.setFirstName("nobody1");
    emp2.setLastName("unknow1");
    emp2.setGender('M');
    emp2.setDependents(1);
    emp2.setAnnualSalary(300000);
    Benefit ben3;
    ben3.setHealthinsurance("unknow3 healthinsurance");
    ben3.setLifeinsurance(20000);
    ben3.setVacation(20);
    emp2.setBenefit(ben3);

    // show the info modified by setter
    emp2.displayEmployee();

    return 0;
}
