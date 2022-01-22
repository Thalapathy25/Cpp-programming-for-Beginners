#include <iostream>
using namespace std;

struct time
{
  int seconds;
  int minutes;
  int hours;
};

void computeTimeDifference(struct time startTime, struct time stopTime, struct time *differenceTime) {
    
    if(stopTime.seconds > startTime.seconds)
    {
        --startTime.minutes;
        startTime.seconds += 60;
    }

    differenceTime -> seconds = startTime.seconds - stopTime.seconds;

    if(stopTime.minutes > startTime.minutes)
    {
        --startTime.hours;
        startTime.minutes += 60;
    }

    differenceTime -> minutes = startTime.minutes - stopTime.minutes;
    differenceTime -> hours = startTime.hours - stopTime.hours;
}

int main()
{
    struct time startTime, stopTime, differenceTime;

    cout << "Enter start time : " << endl;
    cout << "Enter hours   : "; 
    cin >> startTime.hours ;
    cout << "Enter minutes : "; 
    cin >> startTime.minutes; 
    cout << "Enter seconds : ";
    cin >> startTime.seconds;

    cout << "Enter stop time : " << endl;
    cout << "Enter hours   : "; 
    cin >> stopTime.hours; 
    cout << "Enter minutes : "; 
    cin >> stopTime.minutes; 
    cout << "Enter seconds : ";
    cin >> stopTime.seconds;

    //calling computeTimeDifference function by passing startTime, stopTime and differenceTime variable pointer
    computeTimeDifference(startTime, stopTime, &differenceTime);

    cout << endl << "Difference Time: " << startTime.hours << ":" << startTime.minutes << ":" << startTime.seconds;
    cout << " - " << stopTime.hours << ":" << stopTime.minutes << ":" << stopTime.seconds;
    cout << " = " << differenceTime.hours << ":" << differenceTime.minutes << ":" << differenceTime.seconds << endl;
    return 0;
}
