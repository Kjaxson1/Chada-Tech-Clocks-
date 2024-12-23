// File: Clock.h
#ifndef CLOCK_H
#define CLOCK_H
//Kyrstie Jackson Project1 //

#include <iostream>
#include <iomanip>
using namespace std;

class Clock {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor
    Clock(int h = 0, int m = 0, int s = 0);

    // Add time
    void addTime(int h, int m, int s);

    // Display time
    void displayTime() const;
};

#endif // CLOCK_H
