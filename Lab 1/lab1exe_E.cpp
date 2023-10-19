/*
 *  lab1exe_E.cpp
 *  ENSF 619 Lab 1 Exercise E1
 * By: Yajur Vashisht
 */

#include <iostream>
using namespace std;

void time_convert(int ms_time, int *minutes_ptr, double *seconds_ptr);

int main(void)
{
    int millisec;
    int minutes;
    double seconds;

    cout << "Enter a time interval as an integer number of milliseconds: ";

    // Prompt the user to enter milliseconds and store it in millisec.
    cin >> millisec;

    if (!cin)
    {
        cout << "Unable to convert your input to an int.\n";
        exit(1);
    }

    cout << "Doing conversion for input of " << millisec << " milliseconds ... \n";

    // Call the time_convert function
    time_convert(millisec, &minutes, &seconds);

    cout << "That is equivalent to " << minutes << " minute(s) and " << seconds << " second(s).\n";
    return 0;
}

// Define the time_convert function
void time_convert(int ms_time, int *minutes_ptr, double *seconds_ptr)
{
    // Calculate minutes and remaining milliseconds
    *minutes_ptr = ms_time / (1000 * 60); // 1000 ms in a second, 60 seconds in a minute
    ms_time %= (1000 * 60);

    // Convert remaining milliseconds to seconds
    *seconds_ptr = static_cast<double>(ms_time) / 1000.0;
}
