#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    int x, y;

    while (scanf("%d %d", &x, &y) != EOF)
    {

        int a[y], cont = 0;
        vector<int> b;
        for (int i = 0; i < y; i++)
        {
            scanf("%d", &a[i]);
        }
        if (x == y)
        {
            printf("*\n");
        }
        else
        {

            sort(a, a + y);

            for (int i = 0, j = 0; i < x; i++, j++)
            {
                if (a[j] != i + 1)
                {
                    b.push_back(i + 1);
                    j--;
                }
            }
            for (int i = 0; i < (int)b.size(); i++)
            {
                printf("%d ", b[i]);
            }
            printf("\n");
        }
    }
    return 0;
}