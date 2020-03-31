#include <iostream>
#include <fstream>
using namespace std;

int* shiftArr(int *, int&);

int main()
{
	int num, i, *array, *newArray;
	//read numbers from file:
	fstream ioStr;
	ioStr.open("fileNum.txt", ios::in);
	cout << "Here are the contents of the file" << endl;
	while(ioStr>>num)
	{
		cout << num << endl;
	}
	ioStr.close();
	//ask user for number and allocate an array:
	cout << "How many numbers would you like to read from file (0 - 15)? ";
	bool check = false;
	while (!check)
	{
		cin >> num;
		if (num < 0 || num > 50)  return 1;
		else if (num > 15) cout << "Number is > 15. Try again: " << endl;
		else check = true;
	}
	array = new int[num];
	ioStr.open("fileNum.txt", ios::in);
	for (i = 0; i < num; i++)
	{
		ioStr >> array[i];
	}
	ioStr.close();
	//function call returns a pointer
	newArray = shiftArr(array, num);
	cout << "Here is the new array with elements shifted one position toward the end of the array:" << endl;
	for (i = 0; i < (num + 1); i++)
	{
		cout << newArray[i] << endl;
	}
	return 0;
}


int* shiftArr(int *array, int &size)
{
	int *newArr = new int[size+1];
	newArr[0] = 0;
	for (int i = 1; i < (size + 1); i++)
	{
		newArr[i] = array[i-1];
	}
	return newArr;
}

