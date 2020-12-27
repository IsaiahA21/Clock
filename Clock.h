// clock h file
// clock definition
#ifndef setupp
#define setupp

 class Clock {
	 public:
	 Clock();
	 
	 void set_second(const int change_seconds);
	 int get_second();
	 
	 void set_minute(const int change_minutes);
	 int get_minute();
	 
	 void set_hour(const int change_hours);
	 int get_hour();
	 
	 int get_totalsec();

	 void increment();
	 void decrement();
	 
	 private:
	 int seconds, minutes, hours;
	 int totalsec;
	 
 };
 #endif