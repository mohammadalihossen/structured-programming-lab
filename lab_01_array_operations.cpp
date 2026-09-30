/*
🎯 Lab 1: Array Operations
----------------------------------
Inside this code:
* Taking N number of data inputs in an Array.
* Calculating Total & Average of the data.
* Filtering & printing Even and Odd numbers.
* Finding the Highest & Lowest data with their exact Positions.
*/

#include <iostream>
using namespace std;

int main()
{ 
    int a[20], n, i, total, avg, h, l, h_pos, l_pos;
    
    cout << "how many data: ";
    cin >> n;
    
    for (i = 1; i <= n; i++)
    {
        cout << "data[" << i << "]: ";
        cin >> a[i];
    }

    total = 0;
    for (i = 1; i <= n; i++)
    {
        total = total + a[i];
    }
    
    avg = total / n;
    cout << "printing total is: " << total << endl;
    cout << "printing average is: " << avg << endl;

    cout << "Even data are: " << endl;
    for (i = 1; i <= n; i++)
    {
        if (a[i] % 2 == 0)
        {
            cout << "data[" << i << "]: " << a[i] << endl;
        }
    }
    
    cout << "Odd data are: " << endl;
    for (i = 1; i <= n; i++)
    {
        if (a[i] % 2 != 0)
        {
            cout << "data[" << i << "]: " << a[i] << endl;
        }
    }

    h = 0;
    l = 999;
    for (i = 1; i <= n; i++)
    {
        if (a[i] > h)
        {
            h = a[i];
            h_pos = i;
        }
        if (a[i] < l)
        {
            l = a[i];
            l_pos = i;
        }
    }
    
    cout << "Highest data is: " << h << endl;
    cout << "Highest data position: " << h_pos << endl;
    cout << "Lowest data is: " << l << endl;
    cout << "Lowest data position: " << l_pos << endl;
    
    return 0;
}
