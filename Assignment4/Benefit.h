

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
    string getHealthinsurance() const;
    double getLifeinsurance() const;
    int getVacation() const;

    //setter
    void setHealthinsurance(string hinsurance);
    void setLifeinsurance(double linsurance);
    void setVacation(int vac);

};

#endif
