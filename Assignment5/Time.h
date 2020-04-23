#ifndef Time_H
#define Time_H
#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    Time();
    Time(int, int, int);

    void setTime(int, int, int);
    void getTime()const;
    
    //overloading operators
    Time operator+(const Time&) const;
    bool operator==(const Time&) const;
    bool operator>(const Time&) const;
 };

#endif
