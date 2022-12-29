#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c;
    int c1, c2, c3;

    cin >> a >> b >> c;

    c1 = a * 2 + b * 1;
    c2 = c + a;
    c3 = c * 2 + b;

    int saida = 0x3f3f3f3f;

    saida = min(saida, c1);
    saida = min(saida, c2);
    saida = min(saida, c3);

    cout << saida * 2 << endl;

    return 0;
}