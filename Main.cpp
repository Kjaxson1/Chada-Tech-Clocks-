// File: main.cpp
#include "Clock.h"
#include <iostream>
using namespace std;

// Menu function
void displayMenu() {
    cout << "\n1. Add Hours" << endl;
    cout << "2. Add Minutes" << endl;
    cout << "3. Add Seconds" << endl;
    cout << "4. Exit" << endl;
    cout << "Choose an option: ";
}

int main() {
    Clock clock;
    int choice, value;

    while (true) {
        // Display clocks
        cout << "\nCurrent Time:" << endl;
        clock.displayTime();

        // Display menu
        displayMenu();
        cin >> choice;

        if (choice == 4) break;

        cout << "Enter value to add: ";
        cin >> value;

        switch (choice) {
            case 1:
                clock.addTime(value, 0, 0);
                break;
            case 2:
                clock.addTime(0, value, 0);
                break;
            case 3:
                clock.addTime(0, 0, value);
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    cout << "Exiting program. Goodbye!" << endl;
    return 0;
}
