#include <bits/stdc++.h>
using namespace std;

int main()
{

    int p, m, n;

    while (scanf("%d %d %d", &p, &m, &n) && p != 0 && m != 0 && n != 0)
    {
        int numero;
        char nipe;
        vector<multiset<pair<int, char>>> jogadores;
        vector<pair<int, char>> cartas;
        pair<int, char> carta;

        for (int i = 0; i < p; i++)
        {
            multiset<pair<int, char>> temp;
            for (int j = 0; j < m; j++)
            {
                scanf("%d %c", &numero, &nipe);
                temp.insert(make_pair(numero, nipe));
            }
            jogadores.push_back(temp);
        }
        for (int i = 0; i < (n - (p * m)); i++)
        {
            scanf("%d %c", &numero, &nipe);
            cartas.push_back(make_pair(numero, nipe));
        }
        carta = cartas.front();
        cartas.erase(cartas.begin());
        bool flag = false, action = false, make = false, primeira = true;
        int vez = 0, direcao = 1, resp = 0;

        while (!flag)
        {

            if (carta.first == 12 && !action)
            {

                action = true;
                if (direcao == 1 && !primeira)
                {

                    vez--;
                    if (vez < 0)
                        vez = p - 1;

                    vez--;
                    if (vez < 0)
                        vez = p - 1;
                }
                else if (direcao == -1 && !primeira)
                {

                    vez++;
                    if (vez >= p)
                        vez = 0;

                    vez++;
                    if (vez >= p)
                        vez = 0;
                }

                direcao = direcao * (-1);
            }
            else if (carta.first == 11 && !action)
            {

                action = true;
                vez += direcao;
                if (vez >= p)
                    vez = 0;
                else if (vez < 0)
                    vez = p - 1;
            }
            else if (carta.first == 7 && !action)
            {

                action = true;
                jogadores[vez].insert(cartas.front());
                cartas.erase(cartas.begin());
                jogadores[vez].insert(cartas.front());
                cartas.erase(cartas.begin());
                vez += direcao;
                if (vez >= p)
                    vez = 0;
                else if (vez < 0)
                    vez = p - 1;
            }
            else if (carta.first == 1 && !action)
            {

                action = true;
                jogadores[vez].insert(cartas.front());
                cartas.erase(cartas.begin());
                vez += direcao;
                if (vez >= p)
                    vez = 0;
                else if (vez < 0)
                    vez = p - 1;
            }
            primeira = false;
            for (multiset<pair<int, char>>::reverse_iterator it = jogadores[vez].rbegin(); it != jogadores[vez].rend(); it++)
            {
                if (carta.first == it->first || carta.second == it->second)
                {

                    action = false;
                    make = true;
                    carta = *it;

                    jogadores[vez].erase((++it).base());
                    if (jogadores[vez].empty())
                    {

                        flag = true;
                        resp = vez + 1;
                        break;
                    }
                    vez += direcao;
                    if (vez >= p)
                        vez = 0;
                    else if (vez < 0)
                        vez = p - 1;
                    break;
                }
            }
            if (!make && !flag)
            {
                if (carta.first == cartas.front().first || carta.second ==
                                                               cartas.front().second)
                {
                    carta = cartas.front();
                    cartas.erase(cartas.begin());
                    action = false;
                }
                else
                {

                    jogadores[vez].insert(cartas.front());
                    cartas.erase(cartas.begin());
                }
                vez += direcao;
                if (vez >= p)
                    vez = 0;
                else if (vez < 0)
                    vez = p - 1;
            }
            make = false;
        }
        printf("%d\n", resp);
    }
    return 0;
}