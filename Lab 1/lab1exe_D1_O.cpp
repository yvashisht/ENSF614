/*
 * lab1exe_D1.cpp
 * ENSF 614, Lab 1 - Execise D Part One
 */

#include <iostream>
using namespace std;

void foo(int *a, int *b);

int main(void)
{
  int x = 1000;
  int y = 2000;
  int *p;
  p = &y;
  foo(p, &x);
  cout << "x is " << x << ", y is " << y << ".\n";
  return 0;
}

void foo(int *a, int *b)
{
  *a += 10;
  *b += 20;
 
  /* point one */

  *b += 1;
}
