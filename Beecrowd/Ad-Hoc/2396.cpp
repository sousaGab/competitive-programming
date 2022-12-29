#include <stdio.h>
#include <algorithm>

int main()
{

    int n, m, a;
    scanf("%d"
          "%d",
          &n, &m);

    int soma[n], corredor[n], ordena = 0;

    for (int i = 0; i < n; i++)
    {
        soma[i] = 0;
        corredor[i] = i;
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a);
            soma[i] += a;
        }
    }

    while (ordena == 0)
    {
        ordena = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (soma[i] > soma[i + 1])
            {
                int temp = soma[i];
                soma[i] = soma[i + 1];
                soma[i + 1] = temp;
                ordena = 0;
                temp = corredor[i];
                corredor[i] = corredor[i + 1];
                corredor[i + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", corredor[i] + 1);
    }

    return 0;
}