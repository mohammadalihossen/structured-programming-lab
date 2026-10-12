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

    cout << "Which position data do you want to update: ";
    cin >> pos;
    cout << "Enter the item: ";
    cin >> item;

    a[pos] = item;

    cout << "After update, data elements are:" << endl;

    for(i = 1; i <= n; i++)
    {
        cout << "data[" << i << "]: " << a[i] << endl;
    }
    
    return 0;
}