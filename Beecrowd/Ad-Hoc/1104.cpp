#include <stdio.h>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{

    int a, b;

    while (scanf("%d%d", &a, &b))
    {

        set<int> A;
        set<int> A1;
        set<int> B;
        set<int> result1;
        set<int> result2;

        if (a == b && b == 0)
            break;
        int cont1 = 0, cont2 = 0;
        int valor;
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &valor);
            A.insert(valor);
            A1.insert(valor);
        }
        for (int i = 0; i < b; i++)
        {
            scanf("%d", &valor);
            B.insert(valor);
        }

        set_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(result1, result1.end()));
        set_difference(B.begin(), B.end(), A.begin(), A.end(), inserter(result2, result2.end()));

        if (result1.size() < result2.size())
        {
            printf("%lu\n", result1.size());
        }
        else
        {
            printf("%lu\n", result2.size());
        }
    }

    return 0;
}
