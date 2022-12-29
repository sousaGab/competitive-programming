#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string frase;
    int num, tam, a, b;
    char aux;
    cin >> num;
    cin.ignore();
    for (int i = 0; i < num; i++)
    {
        getline(cin, frase);
        tam = frase.size();
        a = 0;
        b = (tam / 2) - 1;
        while (a < b)
        {
            aux = frase[a];
            frase[a] = frase[b];
            frase[b] = aux;
            a++;
            b--;
        }
        a = tam / 2;
        b = tam - 1;
        while (a < b)
        {
            aux = frase[a];
            frase[a] = frase[b];
            frase[b] = aux;
            a++;
            b--;
        }
        cout << frase << endl;
    }
    return 0;
}