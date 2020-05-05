#include "worker.h"

worker::worker():employee()
{
	hiringDate = "01/01/2000";
	deptName = "DEPT";
	hourlyRate = 0.0f;
}
//sets
void worker::setHiringDate(int m, int d, int y)
{
	while(m>12||m<1||d>31||d<1||y<1||y>9999)
	{
		cout << "Wrong Date! Try again: ";
		cin >> m >> d >> y;
	}
	hiringDate.clear();
	if (m < 10) hiringDate += '0';
	hiringDate += to_string(m);
	hiringDate += '/';
	if (d < 10) hiringDate += '0';
	hiringDate += to_string(d);
	hiringDate += '/';
	if (y < 1000) hiringDate += '0';
	if (y < 100) hiringDate += '0';
	if (y < 10) hiringDate += '0';
	hiringDate += to_string(y);
	cout << "Date has been modified successfully!" << endl;
}
void worker::setDeptName(string dept)
{
	while (dept.length() != 4)
	{
		cout << "Wrong Code! Try again: ";
		cin >> dept;
	}
	string up = dept;
	for (int i = 0; i < 4; i++)
		up[i] = toupper(up[i]);
	deptName = up;
	cout << "Department has been modified successfully!" << endl;
}
void worker::setHourlyRate(float rate)
{
	hourlyRate = rate;
	cout << "Hourly Rate has been modified successfully!" << endl;
}
//other
void worker::modifyWorker()
{
	cout << endl << "What do you want to modify?"<<endl<< "1 - Employee Number" << endl << "2 - Name" << endl << "3 - Age" << endl << "4 - Gender Code"
		<< endl << "5 - Education" << endl << "6 - Hiring Date" << endl << "7 - Department Name" << endl << "8 - Hourly Rate" << endl << endl << "Enter your choice: ";
	int n;
	float b;
	string str;
	
	cin >> n;
	switch (n) {
	case 1:
		cout << "Enter a 9-digit integer number: ";
		cin >> n;
		setNumber(n);
		break;
	case 2:
		cout << "Enter Name (up to 30 characters): ";
		cin.ignore();//to get rid of characters left after using cin
		getline(cin, str);
		setName(str);
		break;
	case 3:
		cout << "Enter Age (2-digit integer number): ";
		cin >> n;
		setAge(n);
		break;
	case 4:
		cout << "Enter Gender (m/M for male, f/F for female): ";
		char gend;
		cin >> gend;
		setGender(gend);
		break;
	case 5:
		cout << "Enter Education (two character code): ";
		cin >> str;
		setEducation(str);
		break;
	case 6:
		cout << "Enter the date (example: 1 1 2000): ";
		int m, d, y;
		cin >> m >> d >> y;
		setHiringDate(m, d, y);
		break;
	case 7:
		cout << "Enter Department (four character code): ";
		cin >> str;
		setDeptName(str);
		break;
	case 8:
		cout << "Enter Hourly Rate: ";
		cin >> b;
		setHourlyRate(b);
		break;
	}
}
void worker::displayWorker()
{
	cout << "Worker Information:" << endl;
	cout << endl << "-----------------------------------" << endl;
	cout << setw(22) << left << "Employee Number:" << getNumber() << endl;
	cout << setw(22) << left << "Name:" << getName() << endl;
	cout << setw(22) << left << "Age:" << getAge() << endl;
	cout << setw(22) << left << "Gender Code:" << getGender() << endl;
	cout << setw(22) << left << "Education:" << getEducation() << endl;
	cout << setw(22) << left << "Hiring Date:" << getHiringDate() << endl;
	cout << setw(22) << left << "Department Name:" << getDeptName() << endl;
	cout << setw(22) << left << "Hourly Rate:" << fixed << setprecision(2) << getHourlyRate() << endl;
	cout << endl << "-----------------------------------" << endl << endl;
}
