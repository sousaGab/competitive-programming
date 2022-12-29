#include <bits/stdc++.h>
using namespace std;
int main()
{

    char c;
    string seq;

    while (scanf("%c", &c) && c != '\n')
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            seq.push_back(c);
        }
    }
    string seq2;
    for (int i = seq.size() - 1; i >= 0; i--)
    {
        seq2.push_back(seq[i]);
    }
    if (seq2.compare(seq) != 0)
        printf("N\n");
    else
        printf("S\n");

    return 0;
}