#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f

int l, k, w, n, m;
int arr1[10005];
int arr2[10005];
set<int> planks;
set<int>::reverse_iterator it;

int check(int k, int sz, bool h)
{
    it = planks.rbegin();
    int d, n, cnt = 0;

    while (k && it != planks.rend())
    {
        n = *it;
        d = sz - n;

        if (h)
        {
            if (arr1[n] <= 0 || d < 0 || (d == n ? (arr1[d] - 1) <= 0 : arr1[d] <= 0))
            {
                it++;
                continue;
            }
        }
        else
        {
            if (arr2[n] <= 0 || d < 0 || (d == n ? (arr2[d] - 1) <= 0 : arr2[d] <= 0))
            {
                it++;
                continue;
            }
        }

        if (h)
        {
            arr1[d]--, arr1[n]--;
        }
        else
        {
            arr2[d]--, arr2[n]--;
        }
        cnt += (d ? 2 : 1);
        k--;
    }
    if (k)
        return INF;
    return cnt;
}

int main()
{

    while (scanf("%d %d", &n, &m) && (n || m))
    {
        memset(arr1, 0, sizeof arr1);
        memset(arr2, 0, sizeof arr2);

        arr1[0] = arr2[0] = INF;

        scanf("%d %d", &l, &k);
        planks.clear();

        for (int i = 0; i < k; i++)
        {
            scanf("%d", &w);

            planks.insert(w);
            arr1[w]++;
            arr2[w]++;
        }

        int ans = INF;

        if ((n * 100) % l == 0)
        {
            ans = min(ans, check(n * 100 / l, m, 1));
        }

        if ((m * 100) % l == 0)
        {
            ans = min(ans, check(m * 100 / l, n, 0));
        }

        if (ans >= INF || ans < 0)
            printf("impossivel\n");
        else
            printf("%d\n", ans);
    }
}