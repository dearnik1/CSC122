#include "Time.h"

Time::Time() {
    t.hours = t.minutes = t.seconds = 0;
}
Time::Time(int h, int m, int s) {
    setTime(h, m, s);
}

void Time::setTime(int h, int m, int s) {
    t.hours = (h + m / 60 + s / 3600) % 24;	// Hours would never be > 23 in HH:MM:SS format
    t.minutes = (m + s / 60) % 60;			// Take into account that 10h > 25h because 25h would turn into 1h
    t.seconds = s % 60;
}

timeStructure Time::getTime()const {
    return t;
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
    return(t.hours * 3600 + t.minutes * 60 + t.seconds > time.t.hours * 3600 + time.t.minutes * 60 + time.t.seconds);
    // converting into seconds is easier than building a whole logic comparing hours, minutes and seconds
}

void Time::printTime(timeStructure t) {	// output nice & neat HH:MM:SS format
    if (t.hours < 10)
        cout << 0;
    cout << t.hours << ":";
    if (t.minutes < 10)
        cout << 0;
    cout << t.minutes << ":";
    if (t.seconds < 10)
        cout << 0;
    cout << t.seconds << endl;
}
