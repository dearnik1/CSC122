#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

string reverse(char[]);

int main()
{
	string str;
	int size;
	cout << "Enter a string: ";
	getline(cin, str);				// Allows using specific characters like spaces
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
	cout << "Reversed String: " << reverse(cStr) << endl;

	system("pause");
	return 0;
}


string reverse(char cString[])
{
	int size = strlen(cString);
	char temp;
	char *pFront = cString;
	char *pRear = pFront + (size - 1);;
	while (pFront < pRear)
	{
		temp = *pFront;
		*pFront = *pRear;
		*pRear = temp;
		pFront++;
		pRear--;
	}
	string newStr = cString;
	return newStr;
}