
#ifndef Time_H
#define Time_H

struct timeStructure{
    int hours;
    int minutes;
    int seconds;
};

class Time {
private:
    int hours, minutes, seconds;

public:
    Time();
    Time(int,int,int);

	void printTime();
    void setTime(int,int,int);
    timeStructure getTime()const;

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
