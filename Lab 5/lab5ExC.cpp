// lab5ExC.cpp
// ENSF 614 Fall 2023 - LAB 5 - EXERCISE C


#include <iostream>
using namespace std;

void insertion_sort(int *int_array, int n, int sort_order);
/* REQUIRES
 *    n > 0.
 *    1 <= sort_order && sort_order <= 2
 *    Array elements int_array[0] ... int_array[n - 1] exist.
 * PROMISES
 *    If sort_order == 1 values of array are rearranged in ascending order.
 *    If sort_order == 2 values of array are rearranged in descending order.
 */


int main()
{
    int sort_order = 1; // 1 for ascending order and 2 for descending order
    
    int a[] = { 413, 282, 660, 171, 308, 537 };
    
    int n_elements = sizeof(a) / sizeof(int);
    
    cout << "Here is your array of integers before sorting: \n";
    for(int i = 0; i < n_elements; i++)
        cout <<  a[i] << endl;
    cout << endl;
    
    insertion_sort(a, n_elements, sort_order);
    
    if(sort_order == 1)
        cout << "Here is your array of integers after ascending sort:  \n" ;
    else if(sort_order == 2)
        cout << "Here is your array of integers after descending sorting:  \n" ;
    
    for(int i = 0; i < n_elements; i++)
        cout << a[i] << endl;

    return 0;
}

void insertion_sort(int *a, int n, int sort_order)
{
    int i;
    int j;
    int value_to_insert;
    
    if(sort_order == 1) {
        
        for (i = 1; i < n; i++) {
            value_to_insert = a[i];
            
            /* Shift values greater than value_to_insert. */
            j = i;
            while ( j > 0 && a[j - 1] > value_to_insert  ) {
                a[j] = a[j - 1];
                j--;
            }
            
            a[j] = value_to_insert;
        }
        
    }
    else {
        
        for (i = 1; i < n; i++) {
            value_to_insert = a[i];
            
            /* Shift values less than value_to_insert. */
            j = i;
            while ( j > 0 && a[j - 1] < value_to_insert  ) {
                a[j] = a[j - 1];
                j--;
            }
            
            a[j] = value_to_insert;
        }
    }
}



