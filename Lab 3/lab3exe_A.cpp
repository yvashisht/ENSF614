// lab3exe_A.cpp
// ENSF 614 Fall 2022 - Lab 3 Exercise A

#include <iostream>
using namespace std;

void moon(int& arg1, int* arg2);

void mars(const int& arg1, int*& arg2);

void jupiter(int& x);

int main()
{
    int arr[] = { 1500, 1100, 1600 };
    int& ref = arr[2];
    
    moon(ref, arr);
    ref++;
    cout << "\nin main after moon and ref++: " << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    int* p = &arr[0];
    
    mars(arr[1] + 300, p);
    cout << endl << arr[0] << " " << arr[1] << endl << arr[2] << endl;
    
    cout << "Final state of arr: " << arr[0] << " " << arr[1] << " " << arr[2] << endl;

    return 0;
}

void moon(int& arg1, int* arg2)
{
    arg1++;
    (*arg2)++;
    
    cout << "\nin moon at Point One: "<< arg1 << " " << *arg2;

    // point one
    
    return;
}

void mars(const int& arg1, int*& arg2)
{
    *arg2 = arg1 + 200;
    cout << "\nin mars: "<< arg1 << " " << *arg2;
    jupiter(*arg2);
    cout << "\nin mars: "<< arg1 << " " << *arg2;
    return;
}

void jupiter(int& x)
{
    cout << "\nin jupiter: "<< x;
    x += 100;
    cout << "\nin jupiter: "<< x;
    // point two
    
    return;
}
