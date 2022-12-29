#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, cont = 0;
    string A, B;
    cin >> n;
    for (int x = 0; x < n; x++)
    {
        cin >> A >> B;
        for (long int i = 0; i < A.size(); i++)
        {
            if (A[i] == B[i])
                continue;
            while (A[i] != B[i])
            {
                if (A[i] == 'z')
                {
                    A[i] = 'a';
                    cont++;
                }
                else
                {
                    A[i] += 1;
                    cont++;
                }
            }
        }
        cout << cont << endl;
        cont = 0;
    }

    return 0;
}