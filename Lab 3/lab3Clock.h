#ifndef LAB3CLOCK_H
#define LAB3CLOCK_H

class Clock {
public:
    Clock();
    Clock(int s);
    Clock(int h, int m, int s);

    void set_hour(int h);
    void set_minute(int m);
    void set_second(int s);

    int get_hour() const;
    int get_minute() const;
    int get_second() const;

    void increment();
    void decrement();
    
    int hms_to_sec() const;
    void sec_to_hms(int totalSeconds);
    void add_seconds(int secondsToAdd);

private:
    int hour;
    int minute;
    int second;
};

#endif
