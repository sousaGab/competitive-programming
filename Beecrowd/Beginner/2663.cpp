#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;

    map<int, int> conjunto;

    cin >> n >> k;

    int aux;

    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        conjunto[aux]++;
    }

    int count = 0;
    for (map<int, int>::reverse_iterator it = conjunto.rbegin(); it != conjunto.rend(); it++)
    {
        count += it->second;
        if (count >= k)
            break;
    }

    printf("%d\n", count);

    return 0;
}