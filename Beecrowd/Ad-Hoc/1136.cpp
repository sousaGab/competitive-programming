#include <stdio.h>
#include <iostream>

int main()
{

    int n, b, value = 0;

    while (true)
    {

        scanf("%d"
              "%d",
              &n, &b);
        if (n == 0 && b == 0)
            break;

        int ball[b], sequencia[n], cont = 0, sub[b * b], z = 0;

        for (int i = 0; i <= n; i++)
        {
            sequencia[i] = i;
        }

        for (int i = 0; i < b; i++)
        {
            scanf("%d", &ball[i]);
        }
        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j < b; j++)
            {

                sub[z] = ball[i] - ball[j];

                if ((sub[z] != sub[z - 1] || z == 0) && sub[z] >= 0)
                {

                    z++;
                }
            }
        }

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j < z; j++)
            {
                if (sequencia[i] == sub[j] && sequencia[i] > cont)
                {
                    cont++;
                    break;
                }
            }
        }

        if (cont == n)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}