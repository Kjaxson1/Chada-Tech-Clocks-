// File: Clock.cpp
#include "Clock.h"

// Constructor implementation
Clock::Clock(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

// Add time implementation
void Clock::addTime(int h, int m, int s) {
    seconds += s;
    minutes += seconds / 60;
    seconds %= 60;

    minutes += m;
    hours += minutes / 60;
    minutes %= 60;

    hours = (hours + h) % 24;
}

// Display time implementation
void Clock::displayTime() const {
    // 24-hour format
    cout << setw(2) << setfill('0') << hours << ":"
         << setw(2) << setfill('0') << minutes << ":"
         << setw(2) << setfill('0') << seconds << " (24-Hour Clock)" << endl;

    // 12-hour format
    int displayHours = (hours % 12 == 0) ? 12 : hours % 12;
    string meridiem = (hours < 12) ? "AM" : "PM";
    cout << setw(2) << setfill('0') << displayHours << ":"
         << setw(2) << setfill('0') << minutes << ":"
         << setw(2) << setfill('0') << seconds << " " << meridiem
         << " (12-Hour Clock)" << endl;
}
