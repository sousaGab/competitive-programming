#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N;
    int led = 0;
    string v[100000];

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] == '0')
                led += 6;
            if (v[i][j] == '1')
                led += 2;
            if (v[i][j] == '2')
                led += 5;
            if (v[i][j] == '3')
                led += 5;
            if (v[i][j] == '4')
                led += 4;
            if (v[i][j] == '5')
                led += 5;
            if (v[i][j] == '6')
                led += 6;
            if (v[i][j] == '7')
                led += 3;
            if (v[i][j] == '8')
                led += 7;
            if (v[i][j] == '9')
                led += 6;
        }
        cout << led << " leds" << endl;
        led = 0;
    }

    return 0;
}