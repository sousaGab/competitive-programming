#include <bits/stdc++.h>

const int NMAX = 1e6 + 10;

int main()
{

    long long n, v[NMAX];
    long long max = -1;

    scanf("%lld", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%lld", &v[i]);
        if (max < v[i])
            max = v[i];
    }

    if (max == v[0])
        printf("S\n");
    else
        printf("N\n");

    return 0;
}