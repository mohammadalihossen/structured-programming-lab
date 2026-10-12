#include <iostream>

using namespace std;

int main()
{
    int a[20], n, pos, i;
    cout << "How many data: ";
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        cout << "data[" << i << "]: ";
        cin >> a[i];
    }

    cout << "Which position data do you want to delete: ";
    cin >> pos;
    
    for(i = pos; i <= n; i++)
    {
        a[i] = a[i + 1];
    }

    n = n - 1;
    cout << "After delete, data elements are:" << endl;

    for(i = 1; i <= n; i++)
    {
        cout << "data[" << i << "]: " << a[i] << endl;
    }
    
    return 0;
}