#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int change(int x)
{
    if (x == 1)
        return 0;
    if (x == 0)
        return 1;
}
int main()
{
    char x;
    int letra = 1;
    while ((x = getchar()) != -1)
    {
        if (x >= 'A' && x <= 'Z')
        {
            if (letra == 0)
            {
                x = x + 32;
                letra = 1;
            }
            else
                letra = 0;
        }
        else if (x >= 'a' && x <= 'z')
        {
            if (letra == 1)
            {
                x = x - 32;
                letra = 0;
            }
            else
                letra = 1;
        }
        cout << x;
        if (x == '\n')
            letra = 1;
    }

    return 0;
}