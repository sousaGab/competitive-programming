#include <stdio.h>
#include <algorithm>

struct consulta
{
    int ini, fim;
};

bool compara(consulta a, consulta b)
{

    return a.fim < b.fim;
}

int main()
{

    int n, cont = 1, x = 0;
    scanf("%d", &n);
    consulta v[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d"
              "%d",
              &v[i].ini, &v[i].fim);
    }

    std::sort(v, v + n, compara);

    for (int i = 1; i < n; i++)
    {

        if (v[x].fim <= v[i].ini)
        {

            x = i;
            cont++;
        }
    }

    printf("%d\n", cont);

    return 0;
}