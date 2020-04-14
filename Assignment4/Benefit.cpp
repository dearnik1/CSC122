#include "Benefit.h"
#include <iostream>

Benefit::Benefit(){
    healthinsurance = "";
    lifeinsurance = 0;
    vacation = 0;

}
Benefit::Benefit(string _healthinsurance, double _lifeinsurance, int _vacation){
    healthinsurance = _healthinsurance;
    lifeinsurance = _lifeinsurance;
    vacation = _vacation;
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
    cout << "healthinsurance: " << healthinsurance << endl;
    cout << "lifeinsurance: " << lifeinsurance << endl;
    cout << "vacation: " << vacation << endl;
}
