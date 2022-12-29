#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, l, c, l1, pag, x, linhas, cont;
    string conto;

    while (cin >> n >> l >> c)
    {
        x = -1;
        l1 = 0;
        pag = 1;

        for (int i = 0; i < n; i++)
        {
            cin >> conto;
            if (i == n - 1)
            {
                x += conto.size();
            }
            else
            {
                x += conto.size() + 1;
            }
            if (x >= c)
            {
                if (x > c)
                {
                    x = conto.size();
                }
                else
                {
                    x = -1;
                }
                l1++;
            }
            if (l1 >= l)
            {
                pag++;
                l1 = 0;
            }
        }
        cout << pag << endl;
    }
    return 0;
}