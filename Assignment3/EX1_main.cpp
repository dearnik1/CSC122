//
//  main.cpp
//  assignment3
//
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int * elementShifter(const int array[], const int size);
void printData();


int main() {

    cout << "Here are the contents of the file" << endl;
    printData();

    int n;
    cout << "How many numbers would you like to read from file? ";
    cin >> n;

    if (n>15 || n<=0)
        return 0;


    int array[n];
    //reads n integers from file data.txt into the array
    ifstream myfile("data.txt");
    int count = 0;
    int x;
    // and read integer from file,
    while (count < n && myfile >> x)
        array[count++] = x;

    myfile.close();


    //passes the array to element shifter function
    int *newArray = elementShifter(array, n);

    //print newArray
    cout << "Here is the new array with elements shifted one position toward the end of the array: " << endl;
    for (int i = 0; i < n+1; i++) {
        cout << *(newArray+i) << endl;
    }

    return 0;
}



int * elementShifter(const int array[], const int size){
    int *newArray = new int[size+1];
    newArray[0] = 0;
    for (int i = 1; i <= size; i++) {
        newArray[i] = array[i-1];
    }
    return newArray;
}

void printData(){
    string line;
    ifstream myfile;
    myfile.open("data.txt");

    if (myfile.is_open()){
      while (getline (myfile,line)){
        cout << line << '\n';
      }
      myfile.close();
    }
}
