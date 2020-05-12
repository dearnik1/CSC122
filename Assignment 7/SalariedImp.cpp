#include "Salaried.h"
Salaried::Salaried() : Employee()
{
	managementLevel = 0;
}
Salaried::Salaried(string fName, string lName, char gen, int dep,
	Benefit ben, int manLevel) : Employee(fName, lName, gen, dep, ben)
{
	setManLevel(manLevel);
}
Salaried::Salaried(double aSalary, int manLevel) : Employee()
{
	annualSalary = aSalary;
	managementLevel = manLevel;
}
void Salaried::setManLevel(int manLevel)
{
	managementLevel = manLevel;
	if (manLevel > MAX_MANAGEMENT_LEVEL) managementLevel = 3;
	if (manLevel < MIN_MANAGEMENT_LEVEL) managementLevel = 0;
}
double Salaried::calculatePay()
{
	return (annualSalary / 52) + ((annualSalary / 52)/100)*(managementLevel* BONUS_PERCENT);
}
void Salaried::displayEmployee()
{
	cout << "Employee Information:" << endl;
	cout << "_______________________________________________________________" << endl;
	cout << setw(22) << left << "Name:" << getFirstName() << " " << getLastName() << endl;
	cout << setw(22) << left << "Gender:" << getGender() << endl;
	cout << setw(22) << left << "Dependents:" << getDependents() << endl;
	cout << setw(22) << left << "Annual Salary:" << fixed << setprecision(2) << getAnnualSalary() << endl;
	cout << setw(22) << left << "Weekly Salary:" << calculatePay() << endl;
	cout << "_______________________________________________________________" << endl;
	benefit.displayBenefit();
	cout << "Salaried Employee" << endl;
	cout << setw(22) << left << "Management Level: " << getManLevel() << endl;
	cout << "---------Number of Objects created: " << getSum() << "---------" << endl << endl;
}
