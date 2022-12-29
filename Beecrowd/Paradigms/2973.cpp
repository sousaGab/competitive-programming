#include <bits/stdc++.h>

unsigned long long int n, c, t, p[100010], cont;

bool f(unsigned long long int time)
{

    unsigned long long int comp = 0, epop = 0, temp;

    unsigned long long int popcorn = time * t;

    for (int i = 0; i < n; i++)
    {

        epop += p[i];

        if (p[i] > popcorn)
            return false;

        if (epop > popcorn)
        {
            comp++;
            epop = p[i];
            if (comp >= c)
            {
                return false;
            }
        }
    }
    if (epop > popcorn && comp >= c)
    {

        return false;
    }

    return true;
}

int main()
{
    cont = 0;

    std::cin >> n >> c >> t;

    for (int i = 0; i < n; ++i)
    {

        std::cin >> p[i];
    }

    unsigned long long int m = ULONG_MAX;
    unsigned long long int l = 1;
    unsigned long long int r = m;

    while (true)
    {

        if (f(m))
        {

            r = m;
        }
        else
        {

            l = m;
        }

        if (f(m) && !f(m - 1) || (m <= 1 && f(m)))
        {

            break;
        }
        m = l + (r - l) / 2;
    }
    std::cout << m << std::endl;

    return 0;
}
