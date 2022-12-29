#include <bits/stdc++.h>
using namespace std;
#define MAXN 200200
#define MAXM 200200

struct aresta
{
    int dis;
    int a, b;
};

aresta graph[MAXM];
int pai[MAXN];
int peso[MAXN];

bool f(aresta a, aresta b)
{
    return a.dis < b.dis;
}

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

    if (peso[a] < peso[b])
    {
        pai[a] = b;
    }
    else if (peso[b] < peso[a])
    {
        pai[b] = a;
    }
    else
    {
        pai[a] = b;
        peso[b]++;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int out = 0;

    for (int i = 1; i <= n; i++)
    {
        pai[i] = i;
    }

    for (int i = 1; i <= m; i++)
    {
        cin >> graph[i].a >> graph[i].b >> graph[i].dis;
    }

    sort(graph + 1, graph + m + 1, f);

    for (int i = 1; i <= m; i++)
    {
        if (find(graph[i].a) != find(graph[i].b))
        {
            join(graph[i].a, graph[i].b);
            out += graph[i].dis;
        }
    }

    cout << out << endl;
    return 0;
}