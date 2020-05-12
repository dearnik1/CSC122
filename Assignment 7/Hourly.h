#ifndef HOURLY_H
#define HOURLY_H
#include "Benefit.h"
#include "Employee.h"
#include <string>
class Hourly : public Employee {
private:
	const double MIN_WAGE = 10;
	const double MAX_WAGE = 75;
	const double MIN_HOURS = 0;
	const double MAX_HOURS = 50;
	double wage, hours;
	string category;
public:
	Hourly();
	Hourly(double wage, double hours, string category);
	Hourly(string fName, string lName, char gen, int dep, Benefit ben,
		double wage, double hours, string category);

	void setAnnualSalary();
	void setWage(double wage);
	void setHours(double hours);
	void setCategory(string cat);

	double getWage() { return wage; }
	double getHours() { return hours; }
	string getCat() { return category; }

	double calculatePay();
	void displayEmployee();
};
#endif
