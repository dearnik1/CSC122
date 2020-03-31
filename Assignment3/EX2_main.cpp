//
//  main.cpp
//  assignment3
//
//


#include <iostream>
#include <cstring>
using namespace std;

char* reverseString(char * str);

int main() {

    char *line;
    cout << "Enter a String: ";
    cin.getline(line,100);


    line = reverseString(line);

    cout << "Reversed String: " << line << endl;

    return 0;
}

char* reverseString(char * str) {

    int n = strlen(str);
    char *rev = new char[n+1];
    // copy of string to ptr array
    strcpy(rev, str);
    char * front = &rev[0];
    char * rear = &rev[n-1];

    // Swap character starting from two
    for (int i=0; i<n/2; i++){
        swap(*(front++),*(rear--));
    }
    // return pointer of reversed string
    return rev;
}
