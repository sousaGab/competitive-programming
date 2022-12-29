#include <bits/stdc++.h>

const int NMAX = 1e6 + 10;

int main()
{

    long long n, v, p;

    scanf("%lld%lld", &n, &v);

    for (int i = 10; i <= 90; i += 10)
    {
        p = ((n * v * i) + 99) / 100;
        printf("%lld", p);
        if (i != 90)
            printf(" ");
        else
            printf("\n");
    }

    return 0;
}