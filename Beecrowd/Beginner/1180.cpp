#include <iostream>
using namespace std;
int main()
{
    int N, arr[1001], min = 0, pos;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    min = arr[0];
    for (int i = 0; i < N; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            pos = i;
        }
    }
    cout << "Menor valor: " << min << endl;
    cout << "Posicao: " << pos << endl;

    return 0;
}