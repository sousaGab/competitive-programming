#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{

    int n, d1, d2, d3, d4, valor;
    int cont;
    while (1)
    {
        cont = 1;
        scanf("%d", &n);
        if (n == 0)
            break;
        valor = n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                d1 = fdim(i, 1);
                d2 = fdim(j, 1);
                d3 = fdim(n, i);
                d4 = fdim(n, j);
                if (valor > d1)
                {
                    valor = d1;
                }
                if (valor > d2)
                {
                    valor = d2;
                }
                if (valor > d3)
                {
                    valor = d3;
                }
                if (valor > d4)
                {
                    valor = d4;
                }
                if (j == n)
                {
                    printf("%3d", valor + 1);
                }
                else
                {
                    printf("%3d ", valor + 1);
                }
                valor = n;
            }
            valor = n;
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}