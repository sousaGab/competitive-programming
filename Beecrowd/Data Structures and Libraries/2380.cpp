#include <bits/stdc++.h>
using namespace std;
#define MAX 100100
int pai[MAX];
int peso[MAX];

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

    if (y == x)
    {
        return;
    }

    if (peso[x] < peso[y])
    {
        pai[x] = y;
    }
    else if (peso[y] < peso[x])
    {
        pai[y] = x;
    }
    else if (peso[x] == peso[y])
    {
        pai[x] = y;

        peso[y]++;
    }
}

int main()
{

    int n, k, a, b;
    char c;

    scanf("%d%d", &n, &k);

    for (int i = 0; i <= n; i++)
        pai[i] = i;

    for (int i = 0; i < k; i++)
    {
        cin >> c >> a >> b;
        if (c == 'F')
        {
            join(a, b);
        }
        else
        {
            if (find(a) == find(b))
                cout << "S" << endl;
            else
                cout << "N" << endl;
        }
    }
    return 0;
}
