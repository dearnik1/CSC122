#include "employee.h"

employee::employee()
{
	number = 100000000;
	name = "no_Name";
	age = 0;
	gender = '-';
	education = "NO";
}

//sets
void employee::setNumber(int num)
{
	while (num < 100000000 || num > 999999999)
	{
		cout << "Wrong number! Try again: ";
		cin >> num;
	}
	number = num;
	cout << "Number has been modified successfully!" << endl;
}
void employee::setName(string name1)
{
	while(name1.length()>30) {
		cout << "Name is too long! Try again: ";
		cin >> name1;
	}
	name = name1;
	cout << "Name has been modified successfully!" << endl;
}
void employee::setAge(int age1)
{
	while (age1 > 99||age1<0)
	{
		cout << "Wrong Age! Try again: ";
		cin >> age1;
	}
	age = age1;
	cout << "Age has been modified successfully!" << endl;
	
}
void employee::setGender(char gend)
{
	while (toupper(gend) != 'M' && toupper(gend) != 'F')
	{
		cout << "Wrong Gender! Try again: ";
		cin >> gend;
	}
	gender = toupper(gend);
	cout << "Gender has been modified successfully!" << endl;
}
void employee::setEducation(string edu)
{
	while (edu.length() != 2)
	{
		cout << "Wrong Code! Try again: ";
		cin >> edu;
	}
	string up = edu;
	for(int i = 0; i<2; i++)
	up[i] = toupper(up[i]);
	education = up;
	cout << "Name has been modified successfully!" << endl;
}
