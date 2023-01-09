#include <bits/stdc++.h>

int main()
{
    int a, b, q, r;
    scanf("%d%d", &a, &b);
    r = a % b;
    q = -1000;

    while (r < 0 || r >= abs(b))
    {
        q++;
        r = -(b * q) + a;

        if (r >= 0 && r < abs(b))
        {
            printf("%d %d\n", q, r);
            return 0;
        }
    }
    q = a / b;
    printf("%d %d\n", q, r);
    return 0;
}
