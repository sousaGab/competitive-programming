#include <bits/stdc++.h>
#define MAXN 250
#define INF 0x3f3f3f3f

using namespace std;

int h, l;
int grafo[MAXN][MAXN];
int componentes[MAXN * MAXN];
int dirx[] = {0, 0, 1, -1};
int diry[] = {1, -1, 0, 0};
int contador = INF;

int visit(int x, int y)
{
    return (l * y) + x;
}

bool valid(int y, int x, int cor)
{

    if (y < 0 || x < 0 || y >= h || x >= l)
    {
        return false;
    }

    return componentes[visit(x, y)] == 0 && grafo[y][x] == cor;
}

int dfs(int y, int x)
{

    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        int b = dirx[i] + x;
        int a = diry[i] + y;

        if (valid(a, b, grafo[y][x]))
        {
            count++;
            componentes[visit(b, a)] = 1;
            count += dfs(a, b);
        }
    }

    return count;
}

int main()
{

    int valor;
    scanf("%d%d", &h, &l);
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < l; j++)
        {
            scanf("%d", &valor);
            grafo[i][j] = valor;
        }
    }

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < h; j++)
        {
            int valor = INF;
            if (componentes[visit(i, j)] == 0)
            {
                componentes[visit(i, j)] = 1;
                valor = dfs(j, i);
            }
            contador = min(contador, valor);
        }
    }

    printf("%d\n", contador + 1);

    return 0;
}