#ifndef SALARIED_H
#define SALARIED_H
#include "Benefit.h"
#include "Employee.h"
#include <string>
class Salaried : public Employee {
private:
	const int MIN_MANAGEMENT_LEVEL = 0;
	const int MAX_MANAGEMENT_LEVEL = 3;
	const double BONUS_PERCENT = 10;
	int managementLevel;
public:
	Salaried();
	Salaried(string fName, string lName, char gen, int dep,
		Benefit ben, int manLevel);
	Salaried(double aSalary, int manLevel);

	void setManLevel(int man);
	int getManLevel() const { return managementLevel; }

	double calculatePay();
	void displayEmployee();
};
#endif
