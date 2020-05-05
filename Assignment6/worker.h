#ifndef WORKER_H
#define WORKER_H
#include "employee.h"

class worker : public employee {
private:
    string hiringDate, deptName;
    float hourlyRate;

public:
    worker();
    //sets
    void setHiringDate(int, int, int);
    void setDeptName(string);
    void setHourlyRate(float);
    //gets
    string getHiringDate() { return hiringDate; }
    string getDeptName() { return deptName; }
    float getHourlyRate() { return hourlyRate; }
    //other
    void modifyWorker();
    void displayWorker();
};

#endif
