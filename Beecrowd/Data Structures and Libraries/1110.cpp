#include <cstdio>

#define MAXT 1000100

int n, fila[MAXT], ini = 1, fim;

int front() { return fila[ini]; }

int back() { return fila[fim]; }

int size() { return fim - ini + 1; }

void push(int x) { fila[++fim] = x; }

void pop()
{
    if (size() > 0)
        ini++;
}

void clear()
{
    ini = 1;
    fim = 0;
}

int main()
{

    while (scanf("%d", &n) && n != 0)
    {

        clear();

        for (int i = 1; i <= n; i++)
            push(i);

        printf("Discarded cards:");

        while (size() >= 2)
        {

            printf(" %d", front());

            pop();

            push(front());

            pop();

            if (size() >= 2)
                printf(",");
        }

        printf("\nRemaining card: %d\n", front());
    }

    return 0;
}