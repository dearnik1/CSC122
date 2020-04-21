#include "Time.h"
#include <iostream>
using namespace std;

Time::Time(){
    hours = minutes = seconds = 0;
}
Time::Time(int h,int m,int s){
	setTime(h, m, s);
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

void Time::printTime() {	// output nice & neat HH:MM:SS format
	if (hours < 10) 
		cout << 0;
	cout << hours << ":";
	if (minutes < 10)
		cout << 0;
	cout << minutes << ":";
	if (seconds < 10)
		cout << 0;
	cout << seconds << endl;
}

void Time::setTime(int h,int m,int s){
    hours = (h + m/60 + s/3600) % 24;	// Hours would never be > 23 in HH:MM:SS format
    minutes = (m + s/60) % 60;			// Take into account that 10h > 25h because 25h would turn into 1h
    seconds = s % 60;
}
timeStructure Time::getTime()const{
    timeStructure t = {hours, minutes, seconds};
    return t;
}

//overloading operators
Time Time::operator+(const Time& t) const{
    int temp_hours = hours + t.hours;
    int temp_min = minutes + t.minutes;
    int temp_sec = seconds + t.seconds;
    return Time(temp_hours, temp_min, temp_sec);
}
bool Time::operator==(const Time& t) const{
    return((hours == t.hours) && (minutes == t.minutes) && (seconds == t.seconds));
}
bool Time::operator>(const Time& t) const{
    return(hours * 3600 + minutes * 60 + seconds > t.hours * 3600 + t.minutes * 60 + t.seconds);	
	// converting into seconds is easier than building a whole logic comparing hours, minutes and seconds
}
