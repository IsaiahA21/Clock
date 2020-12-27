

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setw;
using std::setfill;

#include "Clock.h"


// default constructor
Clock::Clock() {
	seconds = 0;
	minutes =0;
	hours =0;
    totalsec=0;
}


// new stuff 
void Clock::set_second(const int change_seconds) {
	totalsec += change_seconds;
}

void Clock::set_minute(const int change_minutes){
	totalsec += change_minutes*60;
}

void Clock::set_hour(const int change_hours){
	totalsec += change_hours*3600;
}

int Clock::get_second() {
	int current =0;
	hours = totalsec/3600;
	current = totalsec - (hours*3000); 
	minutes = current/60;
	current = current - (minutes*60);
	seconds = current;
	return seconds;
}

int Clock::get_minute() {
	int current =0;
	hours = totalsec/3600;
	current = totalsec - (hours*3600); 
	minutes = current/60;
	return minutes;
}

int Clock::get_hour() {
	hours = totalsec/3600;
	return hours;
}

int Clock::get_totalsec() {
	return totalsec;
}

void Clock::increment(){
	totalsec++;
}
void Clock::decrement(){
	totalsec--;
}
