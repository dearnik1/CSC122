#ifndef Time_H
#define Time_H
#include <iostream>
using namespace std;

struct timeStructure {
    int hours;
    int minutes;
    int seconds;
};

class Time {
private:
    timeStructure t;

public:
    Time();
    Time(int, int, int);

    void setTime(int, int, int);
    timeStructure getTime()const;
    void printTime(timeStructure t);

    //overloading operators
    Time operator+(const Time&) const;
    bool operator==(const Time&) const;
    bool operator>(const Time&) const;
 };

#endif
