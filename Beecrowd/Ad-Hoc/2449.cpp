#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{

    int n, m, cont = 0;
    scanf("%d"
          "%d",
          &n, &m);
    int v[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    for (int i = 1; i < n; i++)
    {

        if (m >= v[i - 1])
            v[i] += m - v[i - 1];
        else
            v[i] -= v[i - 1] - m;

        cont += abs(m - v[i - 1]);
    }

    printf("%d\n", cont);
    return 0;
}