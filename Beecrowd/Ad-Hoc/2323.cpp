#include <bits/stdc++.h>
#define MAXN 100010

using namespace std;

vector<int> grafo[MAXN];
int peso[MAXN];

int pesar(int x)
{

    if (grafo[x].size() == 0)
    {
        peso[x] = 1;
        return 1;
    }
    else
    {
        peso[x] = 1;
        for (int i = 0; i < grafo[x].size(); i++)
        {
            peso[x] = peso[x] + pesar(grafo[x][i]);
        }
        return peso[x];
    }
}

void pesos(int x)
{

    if (grafo[x].size() == 0)
    {
        peso[x] = 1;
    }
    else
    {
        peso[x] = 1;
        for (int i = 0; i < grafo[x].size(); i++)
        {
            peso[x] = peso[x] + peso[grafo[x][i]];
        }
    }
}

int main()
{

    bool igual = true;
    int n, a, b;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        grafo[b].push_back(a);
    }

    pesar(0);

    for (int i = 0; i <= n; i++)
    {
        if (grafo[i].size() != 0 && grafo[i].size() != 1)
        {
            for (int j = 1; j < grafo[i].size(); j++)
            {
                if (peso[grafo[i][j]] != peso[grafo[i][j - 1]])
                {
                    igual = false;
                }
            }
        }
    }

    if (igual)
    {
        printf("bem\n");
    }
    else
    {
        printf("mal\n");
    }

    return 0;
}