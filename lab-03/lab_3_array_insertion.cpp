#include <iostream>

using namespace std;

int main()
{
    int a[20], n, item, pos, i;
    cout << "How many data: ";
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        cout << "data[" << i << "]: ";
        cin >> a[i];
    }
    cout << "Which data: ";
    cin >> item;
    cout << "In which position: ";
    cin >> pos;
    
    for(i = n; i >= pos; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos] = item;
    n = n + 1;
    
    cout << "After insert, data elements are:" << endl;
    for(i = 1; i <= n; i++)
    {
        cout << "data[" << i << "]: " << a[i] << endl;
    }
    
    return 0;
}