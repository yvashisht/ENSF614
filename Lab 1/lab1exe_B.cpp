/*
 *  lab1exe_B.cpp
 *  ENSF 614 Lab 1, exercise B
 *  Created by Mahmood Moussavi
 *  Completed by: Yajur Vashisht
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double G = 9.8; /* gravitation acceleration 9.8 m/s^2 */
const double PI = 3.141592654;

double degree_to_radian(double d)
{
    double r = d * PI / 180;
    return r;
}

double Projectile_travel_time(double a, double v)
{
    double r = degree_to_radian(a);
    double t = (2 * v * sin(r)) / G;
    return t;
}

double Projectile_travel_distance(double a, double v)
{
    double r = degree_to_radian(a);
    double d = v * v * sin(2 * r) / G;
    return d;
}

void create_table(double v)
{
    cout << "Angle\tt\t\td\n";
    cout << "(deg)\t(sec)\t(m)\n";
    for (double i = 0; i < 19; i++)
    {
        double a = 5 * i;
        double t = Projectile_travel_time(a, v);
        double d = Projectile_travel_distance(a, v);
        cout << a << "\t" << t << "\t" << d << "\n";
    }
}

int main(void)
{

    cout << fixed;
    cout << setprecision(2);
    double velocity;

    cout << "Please enter the velocity at which the projectile is launched (m/sec): ";
    cin >> velocity;

    if (!cin) // means if cin failed to read
    {
        cout << "Invalid input. Bye...\n";
        exit(1);
    }

    while (velocity < 0)
    {
        cout << "\npPease enter a positive number for velocity: ";
        cin >> velocity;
        if (!cin)
        {
            cout << "Invalid input. Bye...";
            exit(1);
        }
    }

    create_table(velocity);
    return 0;
}