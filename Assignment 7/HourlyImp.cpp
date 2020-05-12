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
void Hourly::setWage(double wage1)
{
	wage = wage1;
}
void Hourly::setHours(double hours1)
{
	hours = hours1;
}
void Hourly::setCategory(string cat)
{
	category = cat;
}
double Hourly::calculatePay()
{
	return wage * hours;
}
void Hourly::displayEmployee()
{
	cout << "Employee Information:" << endl;
	cout << "_______________________________________________________________" << endl;
	cout << setw(22) << left << "Name:" << getFirstName() << " " << getLastName() << endl;
	cout << setw(22) << left << "Gender:" << getGender() << endl;
	cout << setw(22) << left << "Dependents:" << getDependents() << endl;
	setAnnualSalary();
	cout << setw(22) << left << "Annual Salary:" << fixed << setprecision(2) << getAnnualSalary() << endl;
	cout << setw(22) << left << "Weekly Salary:" << calculatePay() << endl;
	cout << "_______________________________________________________________" << endl;
	benefit.displayBenefit();
	cout << "Hourly Employee" << endl;
	cout << setw(22) << left << "Category: " << getCat() << endl;;
	cout << setw(22) << left << "Wage: " << getWage() << endl;;
	cout << setw(22) << left << "Hours: " << getHours() << endl;;
	cout << "---------Number of Objects created: " << getSum() << "---------" << endl << endl;
}
