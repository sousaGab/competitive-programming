#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

    int n, c;
    scanf("%d%d", &n, &c);
    map<ll, ll> anterior;
    map<ll, ll> atual;
    map<ll, ll> saida;
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        if (anterior.find(a) != anterior.end())
        {
            if (anterior[a] < b)
            {
                anterior[a] = b;
            }
        }
        else
        {
            anterior[a] = b;
        }
    }
    for (int i = 0; i < c; i++)
    {
        ll a, b;
        cin >> a >> b;

        if (atual.find(a) != atual.end())
        {
            if (atual[a] < b)
            {
                atual[a] = b;
            }
        }
        else
        {
            atual[a] = b;
        }
    }
    for (map<ll, ll>::iterator it = atual.begin(); it != atual.end(); it++)
    {
        if (anterior.find(it->first) == anterior.end())
        {
            saida[it->first] = it->second;
        }
        else if (atual[it->first] > anterior[it->first])
        {
            saida[it->first] = it->second;
        }
    }
    for (map<ll, ll>::iterator it = saida.begin(); it != saida.end(); it++)
    {
        cout << it->first << " " << saida[it->first] << endl;
    }
    return 0;
}