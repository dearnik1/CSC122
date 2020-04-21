#include "Time.h"


Time::Time(){
    hours = minutes = seconds = 0;
}
Time::Time(int h,int m,int s){
    hours = h;
    minutes = m;
    seconds = s;
}

int Time::getHours() const{
    return hours;
}
int Time::getMinutes() const{
    return minutes;
}
int Time::getSeconds() const{
    return seconds;
}


void Time::setTime(int h,int m,int s){
    hours = h;
    minutes = m;
    seconds = s;
}
timestructure Time::getTime()const{
    timestructure t = {hours,minutes,seconds};
    return t;
}

//overloading operators
Time Time::operator+(const Time& t) const{
    int temp_hours = hours + t.hours;
    int temp_min = minutes + t.minutes;
    int temp_sec = seconds + t.seconds;

    if (temp_sec >= 60){
        temp_sec -= 60;
        temp_min++;
    }

    if (temp_min >= 60 ) {
        temp_min -= 60;
        temp_hours++;
    }

    if (temp_hours >= 24) {
        temp_hours -= 24;
    }

    return Time(temp_hours, temp_min, temp_sec);
}
bool Time::operator==(const Time& t) const{
    return((hours == t.hours) && (minutes == t.minutes) && (seconds == t.seconds));
}
bool Time::operator>(const Time& t) const{
    return((hours > t.hours) || ((hours==t.hours)&&(minutes>t.minutes))
        || ((hours==t.hours)&&(minutes==t.minutes)&&(seconds>t.seconds)));
}
