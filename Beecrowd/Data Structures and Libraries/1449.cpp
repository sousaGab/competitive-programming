#include <bits/stdc++.h>
typedef long long ll;
#define all(c)   \
    (c).begin(); \
    (c).end()
#define F first
#define S second
#define MP make_pair
#define PB push_back

using namespace std;

int main()
{

    int instancia;
    scanf("%d", &instancia);
    for (int k = 0; k < instancia; k++)
    {
        int m, n;
        scanf("%d%d", &m, &n);
        string a, b;
        map<string, string> dicionario;
        for (int i = 0; i < m; i++)
        {
            cin >> a;
            cin.ignore();
            getline(cin, b);
            dicionario[a] = b;
        }

        stringstream buffer;
        int linha[n];
        for (int i = 0; i < n; i++)
        {
            linha[i] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            getline(cin, a);
            for (int j = 0; j < a.size(); j++)
            {
                if (a[j] == ' ')
                    linha[i]++;
            }
            a = a + '\n';
            buffer << a;
        }
        string saida;
        int count = 0;
        int line = 0;
        while (buffer >> saida)
        {
            if (dicionario.find(saida) != dicionario.end())
            {
                cout << dicionario[saida];
            }
            else
            {
                cout << saida;
            }
            if (count == linha[line])
            {
                cout << endl;
                line++;
                count = 0;
            }
            else
            {
                count++;
                cout << " ";
            }
        }

        cout << endl;
    }
    return 0;
}