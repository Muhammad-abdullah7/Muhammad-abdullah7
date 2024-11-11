#include <iostream>
using namespace std;
void timetravel(int& h, int& m) {
    m += 15;
    if (m >= 60) {
        m -= 60;  
        h++;      
    }
    if (h >= 24) {
        h = 0;  
    }
}
int main() {
    int hours, minutes;
    cout << "Enter the current time (hours and minutes in 24-hour format):" << endl;
    cout << "Hours (0-23): ";
    cin >> hours;
    cout << "Minutes (0-59): ";
    cin >> minutes;
    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
        cout << "Invalid time input. Please enter valid hours (0-23) and minutes (0-59)." << endl;
        return 0; 
    }
    timetravel(hours, minutes);
    if (hours < 10) {
        cout << "0";
    }
    cout << hours << ":";
    if (minutes < 10) {
        cout << "0";
    }
    cout << minutes << endl;
    return 0;
}

