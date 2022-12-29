#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <iomanip>

using namespace std;
int main()
{
    bool igor = true;
    map<string, int> mapa;
    int n;
    double cont = 0;
    string x;
    scanf("%d \n", &n);
    for (int q = 0; q < n; q++)
    {
        cont = 0;
        map<string, int> mapa;
        while (igor)
        {
            getline(cin, x);
            if (x.size() == 0)
                break;
            if (mapa.find(x) != mapa.end())
            {
                mapa[x] += 1;
            }
            else
            {
                mapa.insert(make_pair(x, 1));
            }
            cont++;
        }
        for (map<string, int>::iterator it = mapa.begin(); it != mapa.end(); ++it)
        {
            cout << it->first << " " << fixed << setprecision(4) << (it->second / cont) * 100.00 << endl;
        }
        if (q != n - 1)
            cout << endl;
    }
    return 0;
}
