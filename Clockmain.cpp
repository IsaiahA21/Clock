

#include <iostream>
#include <iomanip>
/*using std::cout;
using std::endl;
using std::setw;
using std::setfill;*/
using namespace std;

#include "Clock.h"

void print(const Clock& t);
// REQUIRES: t refers to an object of class Clock with valid values.
// PROMISES: displays the time values in an object of class Clock:
//           in the following hh:mm:ss.

int main(void) {
    
    Clock t1;
    int userInput=0;
    int addSecs=0;
    int addMins =0;
    int addHours=0;

    cout<<"Welcome to my clock application"<<endl;
    cout<<"Here are a list of things you can do:"<<endl;
    
    cout<<"Enter 0 to quit"<<endl;
    cout<<"Enter 1 to get seconds "<<endl;
    cout<<"Enter 2 to set seconds"<<endl;
    cout<<"Enter 3 to get minutes"<<endl;
    cout<<"Enter 4 to set minutes"<<endl;
    cout<<"Enter 5 to get hours"<<endl;
    cout<<"Enter 6 to set hours"<<endl;
    cout<<"Enter 7 to increment by 1 sec"<<endl;
    cout<<"Enter 8 to decrement by 1 sec"<<endl;
    cout<<"Enter 9 to see total seconds9"<<endl;
    cout<<"Enter 10 to view current time"<<endl;

    cout<<endl<<endl;

    do {
    cout<<"Please select one: ";
    cin>>userInput;
      switch(userInput) {
        case 0: cout<<"Program was close"<<endl,exit(1);

        case 1: cout<<"Current seconds are "<<t1.get_second()<<endl; 
                break;

        case 2: cout<<"Enter the amount of seconds you would like to add: ",cin>>addSecs,t1.set_second(addSecs);
                break;

        case 3: cout<<"Current minutes are "<<t1.get_minute(); 
                cout<<endl;
                break;

        case 4: cout<<"Enter the amount of minutes you would like to add: ",cin>>addMins,t1.set_minute(addMins); 
                cout<<endl;
                break;
        
        case 5: cout<<"Current hours are "<<t1.get_hour(); 
                cout<<endl;
                break;

        case 6: cout<<"Enter the amount of hours you would like to add: ",cin>>addHours,t1.set_hour(addHours); 
                cout<<endl;
                break;

        case 7: cout <<"added a second";
                t1.increment(); 
                cout<<endl; break;

        case 8: cout <<"Removed a seconds ";
                t1.decrement();
                cout<<endl; break;

        case 9: cout<<"Total seconds is "<< t1.get_totalsec();
                cout<<endl; break;

        case 10: cout<<"Current time is "<<t1.get_hour()<< ":"<< t1.get_minute()<<":"<<t1.get_second()<<endl;
               break;

    cout<<endl;
      } 
    }while(userInput != 0);
    return 0;
}


/*void print(const Clock& t)
{
    cout << setw(2) << setfill('0') << t.get_hour() << ":"
    << setw(2) << t.get_minute() << ":" << setw(2) << t.get_second() << endl;
}*/
