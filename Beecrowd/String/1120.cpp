#include <stdio.h>
using namespace std;

int main()
{

    char a, b;
    int cont = 0, igual = 0, VALOR = 0;

    while (true)
    {
        scanf("%c ", &a);

        while (true)
        {
            scanf("%c", &b);
            if (a == b && b == '0')
                break;
            if (b == '\n')
            {
                if (VALOR == 0 && cont == 0)
                {
                    printf("0");
                }
                printf("\n");
                cont = igual = VALOR = 0;
                break;
            }

            if (a != b && cont == 0)
            {

                if (VALOR == 0 && b == '0')
                    continue;
                else
                {
                    printf("%c", b);
                    VALOR = 1;
                }
            }
        }
        if (a == b && b == '0')
            break;
    }
    return 0;
}