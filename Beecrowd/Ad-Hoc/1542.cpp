#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{

    double q, p, d, x, pag = 0;
    while (1)
    {
        scanf("%lf", &q);
        if (q == 0)
            break;
        scanf("%lf %lf", &d, &p);

        if (p == q)
            x = q * d;
        else
            x = (q * d) / (p - q);

        pag = p * x;

        pag = trunc(pag);
        if (pag == 1)
            printf("%0.lf pagina\n", pag);
        else
            printf("%0.lf paginas\n", pag);
    }
    return 0;
}