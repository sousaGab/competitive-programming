#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long r, g, b, p1, p2;
    scanf("%llx%*c", &r);
    scanf("%llx%*c", &g);
    scanf("%llx%*c", &b);
    if ((r * r) % (g * g) == 0)
    {
        p1 = (r * r) / (g * g);
    }
    else
    {
        p1 = r / g;
        p1 = p1 * p1;
    }
    if ((g * g) % (b * b) == 0)
    {
        p2 = (g * g) / (b * b);
    }
    else
    {
        p2 = g / b;
        p2 = p2 * p2;
    }
    p2 = 1 + p1 + p1 * p2;
    printf("%llx\n", p2);
    return 0;
}