#include <iostream>
using namespace std;

// Define the Time structure
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to convert time to total seconds
int convertToSeconds(Time t) {
    return t.hours * 3600 + t.minutes * 60 + t.seconds;
}

int main() {
    Time time;
    cout << "Enter time (hours minutes seconds): ";
    cin >> time.hours >> time.minutes >> time.seconds;

    // Convert time to seconds
    int totalSeconds = convertToSeconds(time);
    cout << "Total seconds: " << totalSeconds << endl;

    return 0;
}
