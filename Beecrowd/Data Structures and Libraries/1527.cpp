#include <bits/stdc++.h>
#define MAXN 100100
using namespace std;

int pai[MAXN];
int peso[MAXN];
int point[MAXN];
int out;

int find(int x)
{
    if (pai[x] == x)
        return x;
    return pai[x] = find(pai[x]);
}
void join(int x, int y)
{

    x = find(x);
    y = find(y);

    if (x == y)
        return;

    if (peso[x] < peso[y])
    {
        pai[x] = y;
        point[y] += point[x];
    }
    if (peso[y] < peso[x])
    {
        pai[y] = x;
        point[x] += point[y];
    }
    if (peso[y] == peso[x])
    {
        pai[y] = x;
        peso[x]++;
        point[x] += point[y];
    }
}

void battle(int x, int y)
{
    x = find(x);
    y = find(y);

    if (point[x] > point[y] && x == find(1))
    {
        out++;
    }
    if (point[y] > point[x] && y == find(1))
    {
        out++;
    }
}

int main()
{
    int n, m, p, q, a, b;
    while (true)
    {
        out = 0;
        scanf("%d%d", &n, &m);
        if (n == 0 && m == 0)
            break;

        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &p);
            pai[i] = i;
            point[i] = p;
            peso[i] = 0;
        }
        for (int i = 0; i < m; i++)
        {
            scanf("%d%d%d", &q, &a, &b);
            if (q == 1)
            {
                join(a, b);
            }
            else
            {
                battle(a, b);
            }
        }
        cout << out << endl;
    }
    return 0;
}
