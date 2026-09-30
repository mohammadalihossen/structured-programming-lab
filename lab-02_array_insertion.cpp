/*
🎯 Lab 2: Array Insertion
----------------------------------
Inside this code:
* Taking custom dynamic data inputs into an Array.
* Shifting existing elements to the right to create space.
* Inserting a new item at a specific custom position.
* Updating the total array count (N = N + 1) and displaying the final array.
*/

#include <iostream>
using namespace std;

int main()
{
    int a[20], n, i, item, pos;
    cout << "How many data:";
    cin >> n;
    
    for(i = 1; i <= n; i++)
    {
        cout << "data[" << i << "]:";
        cin >> a[i];
    }
    
    cout << "which data:";
    cin >> item;
    cout << " in which position:";
    cin >> pos;
    
    // Shifting elements to make room for the new item
    for(i = n; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    
    a[pos - 1] = item; // Inserting the item
    n = n + 1;         // Updating array size

    cout << "after insert, data elements are:" << endl;
    for(i = 1; i <= n; i++)
    {
        cout << "data[" << i << "]:" << a[i] << endl;
    }

    return 0;
}
