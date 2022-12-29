#include <stdio.h>
using namespace std;
int change(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}
int ord(int n, int *v1, int *vp)
{
    int cont = 0, ord = 0;
    while (ord == 0)
    {
        ord = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (vp[v1[i]] > vp[v1[i + 1]])
            {
                change(v1[i], v1[i + 1]);
                cont++;
                ord = 0;
            }
        }
    }
    return cont;
}

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int v1[n], v2[n], vp[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &v1[i]);
        for (int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            vp[x] = i;
        }
        printf("%d\n", ord(n, v1, vp));
    }
    return 0;
}