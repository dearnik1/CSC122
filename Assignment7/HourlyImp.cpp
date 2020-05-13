#include "Hourly.h"

Hourly::Hourly() : Employee()
{
	hours = 40;
	wage = 20;
	category = "full time";
}
Hourly::Hourly(string fName, string lName, char gen, int dep, Benefit ben,
	double wage, double hours, string category) : Employee(fName, lName, gen, dep, ben)
{
	setWage(wage);
	setHours(hours);
	setCategory(category);
}
Hourly::Hourly(double wage, double hours, string category) : Employee()
{
	setWage(wage);
	setHours(hours);
	setCategory(category);
}
void Hourly::setAnnualSalary()
{
	annualSalary = calculatePay()*52;
}
void Hourly::setWage(double _wage)
{
	if((MAX_WAGE>=_wage) && (_wage>=MIN_WAGE))
		wage = _wage;
}
void Hourly::setHours(double _hours)
{
	if(MAX_HOURS>=_hours>=MIN_HOURS)
		hours = _hours;
}
void Hourly::setCategory(string cat)
{
	if(cat == "temporary" || cat == "part time" ||cat == "full time")
		category = cat;
}
double Hourly::calculatePay()
{
	return wage * hours;
}
void Hourly::displayEmployee()
{
	Employee::displayEmployee();
	cout << setw(22) << left << "Category: " << getCat() << endl;;
	cout << setw(22) << left << "Wage: " << getWage() << endl;;
	cout << setw(22) << left << "Hours: " << getHours() << endl;;
	cout << "---------Number of Objects created: " << getNumEmployees() << "---------" << endl << endl;
}
