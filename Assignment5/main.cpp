

#include <iostream>
#include "Time.h"
using namespace std;

int main() {

    int h,m,s;

    Time t1;
    cout << "Enter time 1 (hours minutes seconds): ";
    cin >> h >> m >> s;
    t1.setTime(h, m, s);
    cout << "The given time is ";
	t1.printTime();

    cout << "Enter time 2 (hours minutes seconds): ";
    cin >> h >> m >> s;
    Time t2(h,m,s);

	// testing accessors. The output format here might be distorted
    cout << "The given time is " << t2.getHours() << ":" << t2.getMinutes() 
        << ":" << t2.getSeconds() << endl;

    if (t1 == t2)
    	cout << "Time 1 is equal to time 2" << endl;
    else if (t1 > t2)
		cout << "Time 1 is greater than time 2" << endl;
    else
        cout << "Time 1 is less than time 2" << endl;


    Time t3 = t1+t2;
    cout << "Their sum: ";
	t3.printTime();

	system("pause");
    return 0;
}
