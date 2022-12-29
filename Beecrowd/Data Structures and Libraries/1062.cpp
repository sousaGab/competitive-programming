#include <cstdio>
using namespace std;

#define MAXT 1000100
int n, saida[MAXT], pilha[MAXT], tam;

void pop()
{
    if (tam > 0)
        tam--;
}
void push(int x) { pilha[++tam] = x; }
void clear() { tam = 0; }
int top() { return pilha[tam]; }

int main()
{

    while (scanf("%d", &n) && n != 0)
    {

        while (scanf("%d", &saida[1]) && saida[1] != 0)
        {

            for (int i = 2; i <= n; i++)
                scanf("%d", &saida[i]);

            clear();

            int j = 1;

            push(j++);

            bool error = false;

            for (int i = 1; i <= n; i++)
            {

                while (top() != saida[i] && j <= n)
                    push(j++);

                if (top() == saida[i])
                    pop();

                else
                {

                    printf("No\n");
                    error = true;
                    break;
                }
            }

            if (!error)
                printf("Yes\n");
        }
        printf("\n");
    }

    return 0;
}