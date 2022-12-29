#include <bits/stdc++.h>

using namespace std;

bool ord(pair<int, int> a, pair<int, int> b)
{
    if (a.second < b.second)
        return true;
    return false;
}

int main()
{

    int n, countcity = 0;
    while (scanf("%d", &n) && n != 0)
    {
        vector<pair<int, int>> cidade;
        map<int, int> cidadesaida;
        int a, b;
        double valor = 0, population = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            cidade.push_back(make_pair(a, floor(b / a)));
            valor = valor + b;
            population = population + a;
        }
        sort(cidade.begin(), cidade.end(), ord);
        printf(countcity != 0 ? "\n" : "");
        printf("Cidade# %d:\n", countcity + 1);
        for (vector<pair<int, int>>::iterator it = cidade.begin(); it != cidade.end(); it++)
        {
            if (cidadesaida.find(it->second) != cidadesaida.end())
            {
                cidadesaida[it->second] = it->first + cidadesaida[it->second];
            }
            else
            {
                cidadesaida[it->second] = it->first;
            }
        }
        unsigned int loop = 1;
        for (map<int, int>::iterator it = cidadesaida.begin(); it != cidadesaida.end(); it++)
        {

            printf("%d-%d", it->second, it->first);
            printf(loop == cidadesaida.size() ? "\n" : " ");

            loop++;
        }
        valor = valor / population;
        double truncate = floor(valor * 100.0f) / 100.0f;
        printf("Consumo medio: %.2lf m3.\n", truncate);
        countcity++;
    }

    return 0;
}