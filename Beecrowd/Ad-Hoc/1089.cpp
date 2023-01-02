#include <bits/stdc++.h>

#define sc(a) scanf("%d", &a)

using namespace std;
int n, x, ans, arr[10010], nxt, pv;

int main()
{

    while (sc(n) && n)
    {
        ans = 0;

        for (int i = 1; i <= n; i++)
            sc(arr[i]);

        arr[0] = arr[n];
        arr[n + 1] = arr[1];

        for (int i = 1; i <= n; i++)
        {
            x = arr[i];
            pv = arr[i - 1];
            nxt = arr[i + 1];

            if (nxt >= x && pv > x || nxt <= x && pv < x)
                ans++;
        }

        printf("%d\n", ans);
    }
    return 0;
}