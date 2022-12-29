#include <bits/stdc++.h>
const int NMAX = 1e5 + 10;
int n, k, x;
std::vector<int> g[NMAX];
std::vector<int> v2;
std::vector<std::pair<int, int>> v1;
int vis[NMAX];
int check[NMAX];

void dfs(int node, int lvl)
{

    if (vis[node])
        return;

    lvl++;

    vis[node] = lvl;

    if (g[node].size() == 1)
        v1.push_back({lvl, node});
    for (int i = 0; i < g[node].size(); i++)
    {
        dfs(g[node][i], lvl);
    }
}

void dfs1(int node, int cont)
{

    if (check[node])
    {
        v2.push_back(cont);
    }
    else
    {

        check[node] = 1;
        cont++;

        if (vis[node] == 1)
        {
            v2.push_back(cont);
            return;
        }

        for (int i = 0; i < g[node].size(); i++)
        {
            if (vis[g[node][i]] < vis[node])
            {
                dfs1(g[node][i], cont);
            }
        }
    }
}

int main()
{

    scanf("%d%d", &n, &k);

    int ans = 0;

    for (int i = 2; i <= n; ++i)
    {
        scanf("%d", &x);
        g[x].push_back(i);
        g[i].push_back(x);
    }

    dfs(1, 0);

    sort(v1.begin(), v1.end());

    for (int i = v1.size() - 1; i >= 0; --i)
    {
        dfs1(v1[i].second, 0);
    }

    sort(v2.begin(), v2.end());

    for (int i = v2.size() - 1, j = 0; j < k; --i, ++j)
    {
        ans += v2[i];
    }

    printf("%d\n", ans);

    return 0;
}
