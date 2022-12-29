#include <iostream>
#include <algorithm>
using namespace std;
int n, m, nota[1010], fila[1010], cont, t[1010];
bool compara(int x, int y)
{
    if (nota[x] > nota[y])
        return true;
    return false;
}

int main()
{

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        cont = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> nota[j];
            fila[j] = nota[j];
        }

        for (int s = 0; s < m; s++)
            t[s] = s;

        sort(t, t + m, compara);

        for (int j = 0; j < m; j++)
        {
            if (fila[j] == nota[t[j]])
            {
                cont++;
            }
        }
        cout << cont << endl;
    }

    return 0;
}