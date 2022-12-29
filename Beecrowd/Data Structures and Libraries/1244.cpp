#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
int n, tamanho, t, npalavra[500], cont = 0, tpalavra[500];
int p = 0;
string texto, termo[50];

bool compara(int x, int y)
{

    if (tpalavra[x] > tpalavra[y])
        return true;

    if (tpalavra[x] < tpalavra[y])
        return false;

    if (x < y)
        return true;

    return false;
}

int main()
{
    cin >> n;
    cin.ignore();
    for (int x = 0; x < n; x++)
    {
        getline(cin, texto);
        tamanho = texto.length();
        p = 0;
        termo[0].clear();
        for (int i = 0; i < tamanho; i++)
        {
            if (texto[i] == ' ')
            {
                p++;
                termo[p].clear();
            }
            if (texto[i] != ' ')
            {
                termo[p] += texto[i];
            }
        }
        for (int i = 0; i <= p; i++)
        {
            tpalavra[i] = termo[i].size();
        }
        for (int i = 0; i <= p; i++)
            npalavra[i] = i;

        sort(npalavra, npalavra + p + 1, compara);

        for (int i = 0; i <= p; i++)
        {
            if (i == p)
            {
                cout << termo[npalavra[i]] << endl;
                break;
            }
            cout << termo[npalavra[i]] << " ";
        }
    }
    return 0;
}