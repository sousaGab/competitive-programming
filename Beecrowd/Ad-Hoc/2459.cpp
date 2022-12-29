#include <bits/stdc++.h>
using namespace std;
#define MAXN 500

struct aresta
{
    int dis, a, b;
};

aresta graph[MAXN];
aresta ferr[MAXN];
aresta rod[MAXN];
int pai[MAXN];
int peso[MAXN];

bool comp(aresta a, aresta b) { return a.dis < b.dis; }

int find(int x)
{
    if (pai[x] == x)
        return x;
    return pai[x] = find(pai[x]);
}

void join(int a, int b)
{

    a = find(a);
    b = find(b);

    if (pai[a] < pai[b])
        pai[a] = b;
    else if (pai[b] < pai[a])
        pai[b] = a;
    else
    {
        pai[a] = b;
        peso[b]++;
    }
}
int main()
{
    int n, f, r, out = 0;
    cin >> n >> f >> r;

    for (int i = 1; i <= n; i++)
        pai[i] = i;

    for (int i = 0; i < f; i++)
        cin >> ferr[i].a >> ferr[i].b >> ferr[i].dis;
    for (int i = 0; i < r; i++)
        cin >> rod[i].a >> rod[i].b >> rod[i].dis;

    sort(ferr, ferr + f, comp);
    sort(rod, rod + r, comp);

    for (int i = 0; i < f; i++)
    {
        if (find(ferr[i].a) != find(ferr[i].b))
        {
            join(ferr[i].a, ferr[i].b);
            out += ferr[i].dis;
        }
    }
    for (int i = 0; i < r; i++)
    {
        if (find(rod[i].a) != find(rod[i].b))
        {
            join(rod[i].a, rod[i].b);
            out += rod[i].dis;
        }
    }

    cout << out << endl;

    return 0;
}