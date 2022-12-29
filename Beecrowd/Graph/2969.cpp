#include <bits/stdc++.h>
struct v
{
    int temp, id;
    bool operator<(const v &o) const
    {
        return temp < o.temp;
    }
};
struct q
{
    int a, b, k, t, l;
};

const int nm = 410, INF = 1e9 + 10;
int n, m;
int dis[nm][nm], Q, out[100000 + 10];
v nd[nm];
std::vector<q> querry[2][100000 + 10];

void floyd(int type)
{

    int f[nm][nm];
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            f[i][j] = dis[i][j];
        }
    }

    int vl = 0, qp = 1;
    for (int i = 1, cur = 1; i <= n; cur = i)
    {
        while (i <= n && nd[i].temp == nd[cur].temp)
        {
            for (int j = 1; j <= n; ++j)
            {
                for (int k = 1; k <= n; ++k)
                {
                    f[nd[j].id][nd[k].id] = std::min(f[nd[j].id][nd[k].id], f[nd[j].id][nd[i].id] + f[nd[i].id][nd[k].id]);
                }
            }
            ++i;
        }
        ++vl;
        while (qp <= std::min(vl, n))
        {
            for (auto x : querry[type][qp])
            {
                out[x.l] = f[x.a][x.b];
            }
            qp++;
        }
    }
    while (qp <= n)
    {
        for (auto x : querry[type][qp])
        {
            out[x.l] = f[x.a][x.b];
        }
        qp++;
    }
}

int main()
{

    scanf("%d%d", &n, &m);

    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &nd[i].temp);
        nd[i].id = i;
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            dis[i][j] = i == j ? 0 : INF;
        }
    }

    for (int i = 1; i <= m; ++i)
    {
        int a, b, t;
        scanf("%d%d%d", &a, &b, &t);
        dis[a][b] = std::min(dis[a][b], t);
        dis[b][a] = std::min(dis[b][a], t);
    }
    std::sort(nd + 1, nd + 1 + n);
    scanf("%d", &Q);

    for (int i = 1; i <= Q; ++i)
    {
        int x, y, w, z;
        scanf("%d%d%d%d", &x, &y, &w, &z);
        querry[z][w].push_back((q){x, y, w, z, i});
    }
    floyd(0);
    for (int i = 1; i <= n; ++i)
        nd[i].temp = -nd[i].temp;
    std::sort(nd + 1, nd + 1 + n);
    floyd(1);

    for (int i = 1; i <= Q; ++i)
    {
        if (out[i] == INF)
            printf("-1\n");
        else
            printf("%d\n", out[i]);
    }

    return 0;
}