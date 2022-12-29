#include <iostream>
using namespace std;
int main()
{
    int B, N, D, C, V, cont = 0;
    int banco[20], debenture[3];

    do
    {

        cin >> B >> N;
        if (B == 0 && N == 0)
        {
            break;
        }
        for (int b = 0; b < B; b++)
        {
            cin >> banco[b];
        }
        for (int n = 0; n < N; n++)
        {
            for (int d = 0; d < 3; d++)
            {
                cin >> debenture[d];
            }
            D = debenture[0] - 1;
            C = debenture[1] - 1;
            V = debenture[2];
            banco[D] = banco[D] - V;
            banco[C] = banco[C] + V;
        }
        cont = 0;
        for (int b = 0; b < B; b++)
        {
            if (banco[b] < 0)
            {
                cont++;
            }
        }
        if (cont != 0)
        {
            cout << "N" << endl;
        }
        else
        {
            cout << "S" << endl;
        }
    } while (B != 0 && N != 0);

    return 0;
}