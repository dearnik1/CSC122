#include "Time.h"


int main() {

    int h, m, s;

    cout << "Enter a time(h m s): ";
    cin >> h >> m >> s;
    Time t1(h, m, s);
    cout << "t1 is ";
    t1.printTime(t1.getTime());
    
    //object 2
    cout << "Enter a time(h m s): ";
    cin >> h >> m >> s;
    Time t2(h, m, s);
    cout << "t2 is ";
    t2.printTime(t2.getTime());

    if (t1 == t2)
        cout << "Time t1 is equal to t2" << endl;
    else if (t1 > t2)
        cout << "Time t1 is greater than time t2" << endl;
    else
        cout << "Time t2 is greater than time t1" << endl;

    Time t3 = t1 + t2;
    cout << "t3(t1+t2): ";
    t3.printTime(t3.getTime());
    return 0;
}
