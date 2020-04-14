

#ifndef Benefit_h
#define Benefit_h

#include <string>

using namespace std;

class Benefit {
private:
    string healthinsurance;
    double lifeinsurance;
    int vacation;
public:
    Benefit();
    Benefit(string hinsurance, double linsurance, int vac);
    void displayBenefit();

    //getter
    string getHealthinsurance() const {return healthinsurance;}
    double getLifeinsurance() const {return lifeinsurance;}
    int getVacation() const {return vacation;}

    //setter
    void setHealthinsurance(string hinsurance);
    void setLifeinsurance(double linsurance);
    void setVacation(int vac);

};

#endif Benefit_h#pragma once
