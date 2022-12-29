#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{

    int x, y;

    while (scanf("%d %d", &x, &y) != EOF)
    {
        long long int fatorial = 1, soma = 0;
        for (int i = 1; i <= x; i++)
        {
            fatorial = fatorial * i;
        }
        soma += fatorial;
        fatorial = 1;
        for (int i = 1; i <= y; i++)
        {
            fatorial = fatorial * i;
        }
        soma += fatorial;

        cout << soma << "\n";
    }
    return 0;
}
