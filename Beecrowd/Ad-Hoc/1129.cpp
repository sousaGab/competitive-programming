#include <iostream>

using namespace std;

int main()
{
    char alternativa, a[1000];
    int n, q[1000][5], cont = 0;
    int s = 0;
    do
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cin >> q[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            s = 0; // loop questao
            for (int j = 0; j < 5; j++)
            {
                // compara questão
                if (q[i][j] <= 127)
                {
                    q[i][j] = 1;
                    s++;
                }
                if (q[i][j] > 127)
                {
                    q[i][j] = 0;
                }
            }
            if (s > 1)
            {
                alternativa = '*';
            }
            if (s == 0)
            {
                alternativa = '*';
            }
            if (s == 1)
            {
                if (q[i][0] == 1)
                {
                    alternativa = 'A';
                }
                if (q[i][1] == 1)
                {
                    alternativa = 'B';
                }
                if (q[i][2] == 1)
                {
                    alternativa = 'C';
                }
                if (q[i][3] == 1)
                {
                    alternativa = 'D';
                }
                if (q[i][4] == 1)
                {
                    alternativa = 'E';
                }
            }
            a[i + cont] = alternativa;
        }
        cont = cont + n;
    } while (n != 0);
    for (int i = 0; i < cont; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}