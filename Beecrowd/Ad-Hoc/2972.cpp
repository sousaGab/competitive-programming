#include <bits/stdc++.h>

int main()
{

    long long n, x, qtd = 0;
    scanf("%lld", &x);
    while (x)
    {
        if (x & 1)
            qtd++;
        x >>= 1;
    }

    printf("%lld\n", (long long)pow(2, qtd));
    return 0;
}