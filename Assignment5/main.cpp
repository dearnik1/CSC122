

#include <iostream>
#include "Time.h"
using namespace std;

int main() {

    int h,m,s;

    Time t1;
    cout << "Enter a time(h m s): ";
    cin >> h >> m >> s;
    t1.setTime(h, m, s);
    cout << "t1 is " << t1.getHours() << ":" << t1.getMinutes()
        << ":" << t1.getSeconds() << endl;

    //object 2
    cout << "Enter a time(h m s): ";
    cin >> h >> m >> s;
    Time t2(h,m,s);
    cout << "t2 is " << t2.getHours() << ":" << t2.getMinutes()
        << ":" << t2.getSeconds() << endl;

    if (t1 == t2)
    	cout << "Time t1 is equal to t2" << endl;
    else if (t1 > t2)
		cout << "Time t1 is greater than time t2" << endl;
    else
        cout << "Time t2 is greater than time t1" << endl;


    Time t3 = t1+t2;
    cout << "t3(t1+t2): " << t3.getHours() << ":" << t3.getMinutes()
         << ":" << t3.getSeconds() << endl;
    return 0;
}
