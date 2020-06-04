#include "Benefit.h"
#include <iostream>
#include <iomanip>

Benefit::Benefit(){
    healthinsurance = "";
    lifeinsurance = 0;
    vacation = 0;
}
Benefit::Benefit(string _healthinsurance, double _lifeinsurance, int _vacation){
    setHealthinsurance(_healthinsurance);
    setLifeinsurance(_lifeinsurance);
    setVacation(_vacation);
}

//setter
void Benefit::setHealthinsurance(string hinsurance){
    healthinsurance = hinsurance;
}
void Benefit::setLifeinsurance(double linsurance){
    lifeinsurance = linsurance;
}
void Benefit::setVacation(int vac){
    vacation = vac;
}

void Benefit::displayBenefit(){
    cout << setw(22) << left << "healthinsurance: " << getHealthinsurance() << endl;
    cout << setw(22) << left << "lifeinsurance: " << fixed << setprecision(2) << getLifeinsurance() << endl;
    cout << setw(22) << left << "vacation: " << getVacation() << " days" << endl;
}

