#include <stdio.h>
#include <vector>
using namespace std;

int g[8];
int g2[4];
int g3[2];

void winner(int a, int b, int x, int cont)
{
    if (a > b)
    {
        g[cont] = x;
    }
    else
    {
        g[cont] = x + 1;
    }
} /**/

void winner2(int x, int y, int a, int b, int cont)
{

    if (a > b)
    {
        g2[cont] = x;
    }
    else
    {
        g2[cont] = y;
    }
}

void winner3(int x, int y, int a, int b, int cont)
{

    if (a > b)
    {
        g3[cont] = x;
    }
    else
    {
        g3[cont] = y;
    }
}

int main()
{

    int a, b;
    int cont = 1;
    char r;
    for (int i = 0; i < 8; i++)
    {
        scanf("%d %d", &a, &b);
        winner(a, b, cont, i);
        cont += 2;
    }

    cont = 0;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d %d", &a, &b);
        winner2(g[cont], g[cont + 1], a, b, i);
        cont += 2;
    }

    cont = 0;
    for (int i = 0; i < 2; i++)
    {
        scanf("%d %d", &a, &b);
        winner3(g2[cont], g2[cont + 1], a, b, i);
        cont += 2;
    }
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%c\n", r = g3[0] + 64);
    }
    else
    {
        printf("%c\n", r = g3[1] + 64);
    }

    return 0;
}