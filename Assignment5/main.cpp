#include "Time.h"


int main() {

    int h, m, s;

    cout << "Enter a time(h m s): ";
    cin >> h >> m >> s;
    Time t1(h, m, s);
    cout << "t1 is ";
    t1.printTime();
    
    //object 2
    cout << "Enter a time(h m s): ";
    cin >> h >> m >> s;
    Time t2(h, m, s);
	timeStructure time2 = t2.getTime();		// Testing getTime(). The output might be not ideal (no zeroes at 06:01:09)
	cout << "t2 is " << time2.hours << ":" << time2.minutes
		<< ":" << time2.seconds << endl;

    if (t1 == t2)
        cout << "Time t1 is equal to t2" << endl;
    else if (t1 > t2)
        cout << "Time t1 is greater than time t2" << endl;
    else
        cout << "Time t2 is greater than time t1" << endl;

    Time t3 = t1 + t2;
    cout << "t3(t1+t2): ";
    t3.printTime();

	system("pause");
    return 0;
}
