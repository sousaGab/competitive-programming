#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b, c;
        if (i == 0)
        {
            cin.ignore();
        }
        getline(cin, a);
        getline(cin, b);
        getline(cin, c);
        int soma = 0;
        int somb = 0;
        int vez = 0;
        int certo1 = 0;
        int certo2 = 0;
        for (int j = 0; j < a.size(); j++)
        {
            certo1 = 0;
            certo2 = 0;
            if (a[j] == b[j])
            {
                soma++;
                certo1 = 1;
            }
            if (a[j] == c[j])
            {
                somb++;
                certo2 = 1;
            }
            if (vez == 0)
            {
                if ((certo1 == 1) && (certo2 == 0))
                {
                    vez = 1;
                }
                else if ((certo2 == 1) && (certo1 == 0))
                {
                    vez = 2;
                }
            }
        }
        cout << "Instancia " << i + 1 << endl;
        if (soma > somb)
        {
            cout << "time 1" << endl;
        }
        else if (somb > soma)
        {
            cout << "time 2" << endl;
        }
        else if (soma == somb)
        {
            if (vez == 1)
            {
                cout << "time 1" << endl;
            }
            else if (vez == 2)
            {
                cout << "time 2" << endl;
            }
            else if (vez == 0)
            {
                cout << "empate" << endl;
            }
        }

        cout << endl;
    }
    return 0;
}