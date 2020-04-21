
#ifndef Time_H
#define Time_H

struct timestructure{
    int hours;
    int minutes;
    int seconds;
};

class Time {
private:
    int hours,minutes,seconds;

public:
    Time();
    Time(int,int,int);

    void setTime(int,int,int);
    timestructure getTime()const;

    //getter
    int getHours() const;
    int getMinutes() const;
    int getSeconds() const;

    //overloading operators
    Time operator+(const Time&) const;
    bool operator==(const Time&) const;
    bool operator>(const Time&) const;
};


#endif
