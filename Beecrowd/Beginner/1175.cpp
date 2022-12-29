#include <iostream>
using namespace std;
int main()
{
    int arr[20], x;
    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0, f = 19; i < 10; i++, f--)
    {
        x = arr[i];
        arr[i] = arr[f];
        arr[f] = x;
    }
    for (int i = 0; i < 20; i++)
    {
        cout << "N[" << i << "] = " << arr[i] << endl;
    }
    return 0;
}