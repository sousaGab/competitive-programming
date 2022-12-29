#include <stdio.h>

int hanoi(int x)
{

    if (x == 1)
    {
        return 1;
    }
    else
    {
        return 1 + 2 * hanoi(x - 1);
    }
}
int main()
{

    int n, teste = 1;

    while (true)
    {

        scanf("%d", &n);

        if (n == 0)
            break;

        printf("Teste %d\n", teste);
        teste++;
        printf("%d\n\n", hanoi(n));
    }

    return 0;
}