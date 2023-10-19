#include "lab3Clock.h"

// Default Constructor

Clock::Clock() {
    hour = 0;
    minute = 0;
    second = 0;
}

// Used for seconds

Clock::Clock(int s) {
    if (s < 0) {
        hour = 0;
        minute = 0;
        second = 0;
    } else {
        hour = s / 3600;
        minute = (s % 3600) / 60;
        second = (s % 3600) % 60;
    }
}

// Used for all variables in clock

Clock::Clock(int h, int m, int s) {
    if (h < 0 || h > 23 || m < 0 || m > 59 || s < 0 || s > 59) {
        hour = 0;
        minute = 0;
        second = 0;
    } else {
        hour = h;
        minute = m;
        second = s;
    }
}

void Clock::set_hour(int h) {
    if (h >= 0 && h <= 23) {
        hour = h;
    }
}

void Clock::set_minute(int m) {
    if (m >= 0 && m <= 59) {
        minute = m;
    }
}

void Clock::set_second(int s) {
    if (s >= 0 && s <= 59) {
        second = s;
    }
}

int Clock::get_hour() const {
    return hour;
}

int Clock::get_minute() const {
    return minute;
}

int Clock::get_second() const {
    return second;
}

void Clock::increment() {
    second++;
    if (second >= 60) {
        second = 0;
        minute++;
        if (minute >= 60) {
            minute = 0;
            hour++;
            if (hour >= 24) {
                hour = 0;
            }
        }
    }
}

void Clock::decrement() {
    second--;
    if (second < 0) {
        second = 59;
        minute--;
        if (minute < 0) {
            minute = 59;
            hour--;
            if (hour < 0) {
                hour = 23;
            }
        }
    }
}

int Clock::hms_to_sec() const {
    return hour * 3600 + minute * 60 + second;
}

void Clock::sec_to_hms(int totalSeconds) {
    hour = totalSeconds / 3600;
    minute = (totalSeconds % 3600) / 60;
    second = totalSeconds % 60;
}

void Clock::add_seconds(int secondsToAdd) {
    if (secondsToAdd > 0) {
        int totalSeconds = hms_to_sec();
        totalSeconds += secondsToAdd;
        sec_to_hms(totalSeconds);
    }
}
