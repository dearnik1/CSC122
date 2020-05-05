#ifndef MANAGER_H
#define MANAGER_H
#include "employee.h"

class manager : public employee {
private:
    string dateOfPromo, deptName, jobTitle;
    float yearlySalary;

public:
    manager();
    //sets
    void setPromoDate(int, int, int);
    void setDeptName(string);
    void setJobTitle(string);
    void setYearlySalary(float);
    //gets
    string getDateOfPromo() { return dateOfPromo; }
    string getDeptName() { return deptName; }
    string getJobTitle() { return jobTitle; }
    float getYearlySalary() { return yearlySalary; }
    //other
    void modifyManager();
    void displayManager();
};

#endif

