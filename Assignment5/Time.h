#ifndef Time_H
#define Time_H
#include <iostream>
using namespace std;

struct timestructure {
    int hours;
    int minutes;
    int seconds;
};

class Time {
private:
    timestructure t;

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
