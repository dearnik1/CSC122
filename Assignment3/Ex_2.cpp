#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

string reverse(char[]);

int main()
{
	string str;
	int size;
	cout << "Enter a string: ";
	cin >> str;
	while (str.length() > 100)
	{
		cout << "100 chars max. Try again: ";
		cin >> str;
	}
	size = strlen(str.c_str());
	char *cStr = new char[size + 1];
	for (int i = 0; i <= size; i++)
	{
		cStr[i] = str[i];
	}
	string newString = reverse(cStr);
	cout << "Reversed String: " << newString;
	
	return 0;
}


string reverse(char cString[])
{
	int size = strlen(cString);
	int b = size / 2;
	char temp;
	char *pointer = cString;
	char* pFront = pointer;
	char *pRear = pFront + (size-1);;
	for (int i = 0; i < b; i++)
	{
		 temp = *pFront;
		 *pFront = *pRear;
		 *pRear = temp;
		 pFront = pFront + 1;
		 pRear = pRear - 1;
	}
	string newStr = pointer;
	return newStr;
}
