#include <stdio.h>
#include <algorithm>

#define MAXN 101

struct piloto
{

    int posicao[MAXN];
    int pontos;
    int indice;
};

bool compara(piloto a, piloto b)
{
    if (a.pontos > b.pontos)
    {
        return true;
    }
    else
    {
        if (a.pontos == b.pontos)
        {
            if (a.indice < b.indice)
            {
                return true;
            }
        }
        return false;
    }
}

int main()
{

    int g, p, s, k, maior = 0;
    while (true)
    {

        scanf("%d"
              "%d",
              &g, &p);
        if (g == 0 && p == 0)
            break;
        int corredor;
        piloto v[p];
        for (int i = 0; i < p; i++)
        {
            v[i].pontos = 0;
            v[i].indice = i + 1;
            for (int j = 0; j < MAXN; j++)
                v[i].posicao[j] = 0;
        }
        for (int j = 0; j < g; j++)
        {
            for (int i = 0; i < p; i++)
            {
                scanf("%d", &corredor);
                v[i].posicao[corredor - 1]++;
            }
        }
        scanf("%d", &s);
        for (int i = 0; i < s; i++)
        {
            scanf("%d", &k);
            int points[k];
            for (int j = 0; j < k; j++)
            {
                scanf("%d", &points[j]);
            }
            for (int x = 0; x < p; x++)
            {
                for (int j = 0; j < k; j++)
                {
                    v[x].pontos += (v[x].posicao[j]) * (points[j]);
                }
            }

            std::sort(v, v + p, compara);

            for (int x = 0; x < p; x++)
            {
            }

            maior = v[0].pontos;
            for (int x = 0; x < p; x++)
            {
                if (v[x].pontos == maior)
                {
                    if (x > 0)
                        printf(" ");
                    printf("%d", v[x].indice);
                }
            }
            printf("\n");
            for (int i = 0; i < p; i++)
            {
                v[i].pontos = 0;
            }
        }
    }

    return 0;
}