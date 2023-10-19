// Test file for the upcoming quiz that I'm gonna make my bitch!!!!

#include <iostream>
using namespace std;

bool up_then_down(const int* arr, int n);

int compareMyStrings (const char* arg1, const char* arg2);

void foo (int *x, int *y, int *z); 

typedef struct Clock{
int hours;
int minutes;
double seconds;
};

int main(void)
{
  int a[5] = {10, 20, 30};
  int *b = a;
  int c = 5; 
  foo(a[], b[], &c);
  cout << c << endl;
}

bool up_then_down(const int* arr, int n) {
  int j = 0;
  if (n == 1) {
    return true;
  }

  for (int i = 0; i < n; i++) {
    if (arr[i] > arr[j]) {
      j = i;
    }
  }
  for (int i = j; i < n - 1; i++) {
    if (arr[i] > arr[j]) {
      return false;
    }
  }
  for (int i = 0; i < j; i++) { // Fixed the loop condition here
    if (arr[i] > arr[j]) {
      return false;
    }
  }
  return true;
}

int compareMyStrings (const char* arg1, const char* arg2) {
  int i = 0; 
  if (arg1[i] == arg2[i]) {
    return 0;
  } else if (arg1[i] > arg2[i]) {
    return -1;
  } else {
    return 1;
  }
}

void foo (int *x, int *y, int *z) {
  *z = (*x) * (*y);
}


