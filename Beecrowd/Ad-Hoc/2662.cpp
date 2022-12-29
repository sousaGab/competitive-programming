#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<set<int>> escala;
    int v[24][8];

    v[0][0] = 1;
    v[0][1] = 3;
    v[0][2] = 5;
    v[0][3] = 6;
    v[0][4] = 8;
    v[0][5] = 10;
    v[0][6] = 12;
    v[0][7] = 1;

    for (int i = 1; i < 24; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            v[i][j] = v[0][j] + i;
            if (v[i][j] > 12)
                v[i][j] -= 12;
        }
    }

    for (int i = 0; i < 12; i++)
    {
        set<int> temp;
        for (int j = 0; j < 8; j++)
        {
            temp.insert(v[i][j]);
        }
        escala.push_back(temp);
    }

    int n, x;
    cin >> n;
    int notas[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x;

        if (x > 12)
            x = x % 12;

        notas[i] = x;
    }
    vector<set<int>>::iterator it;
    int cont = 0;
    int resp = 0;
    for (it = escala.begin(); it != escala.end(); it++)
    {
        set<int> temp = *it;
        bool flag = false;
        cont++;
        for (int i = 0; i < n; i++)
        {
            if (temp.find(notas[i]) != temp.end())
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            resp = cont;
            break;
        }
    }
    if (resp != 0)
    {
        string s;
        if (resp == 1)
        {
            s = "do";
        }
        if (resp == 2)
        {
            s = "do#";
        }
        if (resp == 3)
        {
            s = "re";
        }
        if (resp == 4)
        {
            s = "re#";
        }
        if (resp == 5)
        {
            s = "mi";
        }
        if (resp == 6)
        {
            s = "fa";
        }
        if (resp == 7)
        {
            s = "fa#";
        }
        if (resp == 8)
        {
            s = "sol";
        }
        if (resp == 9)
        {
            s = "sol#";
        }
        if (resp == 10)
        {
            s = "la";
        }
        if (resp == 11)
        {
            s = "la#";
        }
        if (resp == 12)
        {
            s = "si";
        }
        cout << s << endl;
    }
    else
    {
        printf("desafinado\n");
    }

    return 0;
}