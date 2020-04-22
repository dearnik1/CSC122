#include "Time.h"

Time::Time() {
    t.hours = t.minutes = t.seconds = 0;
}
Time::Time(int h, int m, int s) {
    setTime(h, m, s);
}

void Time::setTime(int h, int m, int s) {
    t.hours = h;
    t.minutes = m;
    t.seconds = s;
}
void Time::getTime(Time time)const {
    cout << time.t.hours << ":" << time.t.minutes
        << ":" << time.t.seconds << endl;
}

//overloading operators
Time Time::operator+(const Time& time) const {
    int temp_hours = t.hours + time.t.hours;
    int temp_min = t.minutes + time.t.minutes;
    int temp_sec = t.seconds + time.t.seconds;

    if (temp_sec >= 60) {
        temp_sec -= 60;
        temp_min++;
    }

    if (temp_min >= 60) {
        temp_min -= 60;
        temp_hours++;
    }

    if (temp_hours >= 24) {
        temp_hours -= 24;
    }

    return Time(temp_hours, temp_min, temp_sec);
}
bool Time::operator==(const Time& time) const {
    return((t.hours == time.t.hours) && (t.minutes == time.t.minutes) && (t.seconds == time.t.seconds));
}
bool Time::operator>(const Time& time) const {
    return((t.hours > time.t.hours) || ((t.hours == time.t.hours) && (t.minutes > time.t.minutes))
        || ((t.hours == time.t.hours) && (t.minutes == time.t.minutes) && (t.seconds > time.t.seconds)));
}
