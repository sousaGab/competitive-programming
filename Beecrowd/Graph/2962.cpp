#include <bits/stdc++.h>
#define EPS 1e-9
struct point
{
    long long x, y;
};

bool f(std::pair<int, std::pair<int, int>> a, std::pair<int, std::pair<int, int>> b)
{
    return a.first < b.first;
}

long long const NMAX = 1e+5;
long long m, n, k;
std::vector<std::pair<int, std::pair<int, int>>> vs;
long long parent[NMAX], rank[NMAX];

long long find(long long i)
{

    if (parent[i] == i)
        return i;
    else
        return parent[i] = find(parent[i]);
}

void join(int i, int j)
{

    long long irep = find(i);
    long long jrep = find(j);

    if (irep == jrep)
    {
        return;
    }
    else
    {

        if (rank[irep] < rank[jrep])
        {
            parent[irep] = jrep;
        }
        else if (rank[irep] > rank[jrep])
        {
            parent[jrep] = irep;
        }
        else
        {
            parent[jrep] = irep;
            rank[irep]++;
        }
    }
}

void check1(point a, int id, int as)
{

    long long S = as;
    if (a.x - S <= 0)
    {
        join(1, id);
    }
    if (a.x + S >= m)
    {
        join(3, id);
    }
    if (a.y - S <= 0)
    {
        join(2, id);
    }
    if (a.y + S >= n)
    {
        join(4, id);
    }
}

void check2(point a, int ida, int as, point b, int idb, int bs)
{
    long double dist = hypot(a.x - b.x, a.y - b.y);
    if ((dist - (as + bs)) <= EPS)
    {
        join(ida, idb);
    }
}

int main()
{

    scanf("%lld%lld%lld", &m, &n, &k);

    for (long long i = 0; i < NMAX; ++i)
    {
        parent[i] = i;
    }

    for (long long i = 0; i < k; ++i)
    {
        long long x, y, s;
        scanf("%lld%lld%lld", &x, &y, &s);
        vs.push_back({x, {y, s}});
    }
    std::sort(vs.begin(), vs.end(), f);

    for (long long i = 0; i < k; ++i)
    {
        for (long long j = 0; j < k; ++j)
        {
            point A, B;
            A.x = vs[i].first;
            A.y = vs[i].second.first;
            B.x = vs[j].first;
            B.y = vs[j].second.first;
            long long as = vs[i].second.second;
            long long bs = vs[j].second.second;
            int ida = i + 5;
            int idb = j + 5;
            check1(A, ida, as);
            check1(B, idb, bs);
            check2(A, ida, as, B, idb, bs);
        }
    }

    if (find(1) == find(3) || find(1) == find(2) || find(2) == find(4) || find(3) == find(4))
        printf("N\n");
    else
        printf("S\n");

    return 0;
}